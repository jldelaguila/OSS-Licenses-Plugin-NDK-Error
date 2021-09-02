# OSS-Licenses-Plugin-NDK-Error
The oss-linceses-plugin works like a charm on a regular Android project, but when adding a NDK library it starts working wrong.

# The problem
The `/app/build` folder is removed/deleted/not generated after executing the following command:

`./gradlew clean app:assembleDebug`

This is problematic, because on a CI/CD workflow this folder is needed for the APK distribution stage.

# Note
If instead I execute simply `./gradlew app:assembleDebug`, then the `build` folder is present.

# Details
* AGP: 7.0.2
* oss-licenses plugin version: 0.10.4
* Language: Kotlin 1.5.21
* jvmTarget: 11

# Executing assemble only
![Image](https://github.com/jldelaguila/OSS-Licenses-Plugin-NDK-Error/blob/main/screenshots/assemble.png)

# Executing clean + assemble
![Image](https://github.com/jldelaguila/OSS-Licenses-Plugin-NDK-Error/blob/main/screenshots/clean_assemble.png)
