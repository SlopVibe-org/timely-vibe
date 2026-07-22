<div align="center">

# ⌚ Timely-Vibe

**A bold, readable watchface for the Pebble Time 2 — massive Anton time display, single-week calendar, weather, and health complications.**

![Version](https://img.shields.io/badge/version-3.3.0-blue)
![Platforms](https://img.shields.io/badge/Pebble-emery%20(Time%202)-orange)
![Language](https://img.shields.io/badge/C-C99-555?logo=c)
![PebbleKit JS](https://img.shields.io/badge/config-PebbleKit%20JS-f5a623?logo=javascript&logoColor=white)

[Rebble Store](https://apps.repebble.com/f62530e9f97649b093a50e9e)

</div>

---

## ✨ Overview

Timely-Vibe is a customized watchface based on [TimelyNG](https://github.com/eldios/TimelyNG), rebuilt for maximum readability on the Pebble Time 2 (Emery, 200×228px).

### Key changes from TimelyNG:
- **Ultra-bold Anton 96px time display** — the biggest, most readable time possible
- **Single-week calendar** (instead of 3 weeks) — frees up screen space for the massive time
- **Weather with icon + temperature** side-by-side, positioned above the time
- **Above-time complications** share the same line as the weather
- **Removed "Above calendar" row** — time sits directly above the calendar
- **Today highlighted** with accent background + black text for contrast
- **Optimized defaults** — Sunset, Watch battery, text battery %, D MMMM date format

## 🧩 Complications

All complications are available in every slot (status bar, above time left/right):

| Category | Complications |
|----------|--------------|
| **Health** | 👟 Steps, ❤️ Heart rate (BPM), 📏 Distance, 🔥 Calories, 😴 Sleep |
| **Weather** | 🌡️ Temperature, 🌅 Sunrise, 🌇 Sunset, 🌙 Moon phase, 📍 Location |
| **System** | 🔋 Watch/Phone battery, 📶 Bluetooth, 📅 Date, 🕐 Timezone, 2nd time zone |
| **Date** | Day, Month, Week number, Day of year, Days left, Seconds, AM/PM |

### Date formats:
- D MMMM (localized, e.g. "22 Juillet")
- MMMM DD, YYYY / Mmm DD, YYYY / D MMMM YYYY / and more

## ⌚ Platform

| Platform | Watch | Screen | Status |
|----------|-------|--------|--------|
| `emery` | Pebble Time 2 | colour 200×228 | ✅ Supported (only) |

## 🔨 Building

```sh
# Requires Pebble SDK (pip install pebble-tool)
pebble build                     # -> build/timely-vibe.pbw
pebble install --emulator emery  # test on emulator
```

## ⚙️ Configuration

Settings are configured offline via PebbleKit JS. The config page is built from `src/js/config.js` and works on both Android and iOS.

## 🙏 Credits

Based on [TimelyNG](https://github.com/eldios/TimelyNG) by [eldios](https://github.com/eldios), which is itself inspired by the original [Timely](https://github.com/Andrew129260/Timely-2) / [PebbleTimely](https://github.com/alan-johnson/PebbleTimely) watchfaces.

## 📦 Store

- **Rebble Store:** [Timely-Vibe](https://apps.repebble.com/f62530e9f97649b093a50e9e)
- **Developer:** [slopvibe.org](https://github.com/SlopVibe-org)
- **Source:** This repository

---

<div align="center">
Made with ⌚ by slopvibe.org
</div>
