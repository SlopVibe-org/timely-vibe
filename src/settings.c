#include "settings.h"

static persist s_settings = {
  .version    = 12,
  .inverted   = 0, // no, dark
  .day_invert = 1, // yes
  .grid       = 1, // yes
  .vibe_hour  = 0, // no
  .dayOfWeekOffset = 0, // 0 - 6, Sun - Sat
  .date_format = 103, // D MMMM (22 Juillet)
  .show_am_pm  = 0,  // above calendar, right: none
  .show_day    = 0,
  .show_week   = 0,  // above calendar, left: none
  .slot_stat_l = 12, // status bar left: Sunset
  .slot_stat_r = 15, // status bar right: watch battery
  .slot_ctr_l  = 0,  // center row left: none
  .slot_ctr_r  = 0,  // center row right: none
  .batt_style  = 1,  // battery: text %

  .week_format = 0, // ISO 8601
  .vibe_pat_disconnect = 2, // double vibe
  .vibe_pat_connect = 0, // no vibe
  .strftime_format = "%Y-%m-%d",
  .track_battery = 0,
  .theme = 1,       // Functional
  .theme_mode = 1,  // Dark (matches the pre-theme look)
};

static persist_adv_settings s_adv = {
  .week_pattern = 0,
  .invertStatBar = 0,
  .invertTopSlot = 0,
  .invertBotSlot = 0,
  .showStatus = 1,
  .showStatusBat = 20, // matches the config page default; threshold for "when battery low"
  .showDate = 1,
  .DND_start = 0,
  .DND_stop  = 0,
  .dnd_mode = 0,
  .vibe_hour_start = 0,
  .vibe_hour_stop  = 0,
  .vibe_hour_days  = 0,
  .idle_reminder = 0,
  .idle_pattern = 0,
  .custom_date_fmt = { "%Y-%m-%d" },
  .idle_start = 0,
  .idle_stop  = 0,
  .clock2_tz = 0,
  .clock2_desc = { "Second Clock" },
  .weather_format = 0,
  .weather_update = 15,
  .weather_lat = "",
  .weather_lon = "",
  .clock_font = 1,
  .token_type = { 0, 0 },
  .token_code = { "", "" },
  .slots = { 0, 1, 2, 3, 0, 1, 0, 1, 0, 1 },
  .weather_icons = 0 // Default: colour on colour watches, B&W on the rest
};

persist *settings_get(void) { return &s_settings; }
persist_adv_settings *adv_settings_get(void) { return &s_adv; }
