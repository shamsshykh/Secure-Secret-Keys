package com.example.secure

import android.os.Build
import java.util.*

fun String.decodeBase64(): String {

    val decodedBytes = if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.O) {
        Base64.getDecoder().decode(this)
    } else {
        android.util.Base64.decode(this, android.util.Base64.DEFAULT);
    }
    return String(decodedBytes)

}