SET(SOURCES ui_LoadingScreen.c
    ui_HomeScreen.c
    ui_PomodoroScreen.c
    ui_TaskListScreen.c
    ui_CalendarScreen.c
    ui_SettingScreen.c
    ui_AboutScreen.c
    ui_HydrateScreen.c
    ui.c
    ui_comp_hook.c
    ui_helpers.c
    ui_img_desk32_png.c
    ui_img_tempicon_png.c
    ui_img_humidityicon_png.c
    ui_img_brightnessicon_png.c
    ui_img_about_png.c
    ui_img_watericon_png.c
    fonts/ui_font_OswaldLight20.c
    fonts/ui_font_OswaldLight24.c
    fonts/ui_font_OswaldLight32.c
    fonts/ui_font_OswaldMedium20.c
    fonts/ui_font_OswaldMedium32.c
    fonts/ui_font_OswaldMedium48.c
    fonts/ui_font_OswaldMedium80.c)

add_library(ui ${SOURCES})
