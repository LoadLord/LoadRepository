Action()
{

	web_set_sockets_option("SSL_VERSION", "2&3");

	web_add_cookie("NID=131=ap6eGQ7aOgJgzDA8TRINytbqYUMCWg2HrUo1jL8bY7GVNwTyvdRcbGmEQqPZ0hLspcOrMa8OkPl9riYrMbyxZMtPCW7fjE0_2IKr-1t8OOuKmFi1PwtzON7zuQvPi9H-; DOMAIN=accounts.google.com");

	web_add_header("Origin", 
		"https://www.google.com");

	web_custom_request("ListAccounts", 
		"URL=https://accounts.google.com/ListAccounts?gpsia=1&source=ChromiumAccountReconcilor,counter:0,load_time_ms:3051&json=standard", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		"Body= ", 
		LAST);

	web_url("l", 
		"URL=https://translate.googleapis.com/translate_a/l?client=chrome&hl=en&key=AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("A-IM", 
		"x-bm,gzip");

	web_url("seed", 
		"URL=https://clientservices.googleapis.com/chrome-variations/seed?osname=win&channel=stable&milestone=66", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://ssl.gstatic.com/safebrowsing/csd/client_model_v5_variation_0.pb", "Referer=", ENDITEM, 
		"Url=https://ssl.gstatic.com/safebrowsing/csd/client_model_v5_ext_variation_0.pb", "Referer=", ENDITEM, 
		LAST);

	lr_start_transaction("101_OpenGoogle");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("www.google.com", 
		"URL=https://www.google.com/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://ssl.gstatic.com/gb/images/i2_2ec824b0.png", ENDITEM, 
		"Url=https://ssl.gstatic.com/onebox/weather/64/fog.png", ENDITEM, 
		"Url=https://ssl.gstatic.com/onebox/weather/48/rain_s_cloudy.png", ENDITEM, 
		"Url=https://ssl.gstatic.com/onebox/weather/48/thunderstorms.png", ENDITEM, 
		"Url=https://ssl.gstatic.com/onebox/weather/48/partly_cloudy.png", ENDITEM, 
		"Url=https://ssl.gstatic.com/m/images/weather/wind_unselected.svg", ENDITEM, 
		LAST);

	web_url("ui", 
		"URL=https://adservice.google.com/adsid/google/ui", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.google.com/", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("101_OpenGoogle",LR_AUTO);

	lr_think_time(5);

	lr_start_transaction("102_EnterWeatherClickSearch");

	web_add_cookie("NID=131=Z362GQegm7JBbiMRh-tncMnY7pW1whL8FPVuqRuvUi7EWCuJhxac7oLe_rm6-_qWPwRluwt4MuBuYlP3s4uYcVQxHjCZzUnoTXV9SjJtRLuQ_eEL2HEnbYHYv_gcgoao; DOMAIN=id.google.com");

	web_url("ABGYjaaWjSFouGBGZICKXfNkvF1nsiyL7BXWUucE8cxeZmJusOj5-9TgV_cvdy5Q_ZFXT65BvuXKrVVdr2wcPVYtySWjCtMBdyqE9AV89uxlNDYj9Tlg64JVyQqQ", 
		"URL=https://id.google.com/verify/ABGYjaaWjSFouGBGZICKXfNkvF1nsiyL7BXWUucE8cxeZmJusOj5-9TgV_cvdy5Q_ZFXT65BvuXKrVVdr2wcPVYtySWjCtMBdyqE9AV89uxlNDYj9Tlg64JVyQqQ", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.google.com/", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("102_EnterWeatherClickSearch",LR_AUTO);

	lr_think_time(5);

	return 0;
}