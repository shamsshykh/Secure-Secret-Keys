package com.example.secure

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import com.example.secure.databinding.ActivityMainBinding
import java.util.*

class MainActivity : AppCompatActivity() {

    private lateinit var binding: ActivityMainBinding
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        binding = ActivityMainBinding.inflate(layoutInflater)
        setContentView(binding.root)
        binding.apiKey.text = Keys.apiKey().decodeBase64()
        binding.baseUrl.text = Keys.baseUrl().decodeBase64()


    }
}