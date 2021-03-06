﻿<?php
  /**
   * @file
   * Provides a list of countries and languages based on ISO standards.
   */

  /**
   * Get an array of all country code => country name pairs.
   *
   * Get an array of all country code => country name pairs as laid out
   * in ISO 3166-1 alpha-2.
   * Grabbed from location project (http://drupal.org/project/location).
   * @return
   *   An array of all country code => country name pairs.
   */
  function _country_get_predefined_list() {
    static $countries;

    if (isset($countries)) {
      return $countries;
    }
    $t = get_t();

    $countries = array(
      'AD' => $t('Andorra'),
      'AE' => $t('United Arab Emirates'),
      'AF' => $t('Afghanistan'),
      'AG' => $t('Antigua and Barbuda'),
      'AI' => $t('Anguilla'),
      'AL' => $t('Albania'),
      'AM' => $t('Armenia'),
      'AN' => $t('Netherlands Antilles'),
      'AO' => $t('Angola'),
      'AQ' => $t('Antarctica'),
      'AR' => $t('Argentina'),
      'AS' => $t('American Samoa'),
      'AT' => $t('Austria'),
      'AU' => $t('Australia'),
      'AW' => $t('Aruba'),
      'AX' => $t('Aland Islands'),
      'AZ' => $t('Azerbaijan'),
      'BA' => $t('Bosnia and Herzegovina'),
      'BB' => $t('Barbados'),
      'BD' => $t('Bangladesh'),
      'BE' => $t('Belgium'),
      'BF' => $t('Burkina Faso'),
      'BG' => $t('Bulgaria'),
      'BH' => $t('Bahrain'),
      'BI' => $t('Burundi'),
      'BJ' => $t('Benin'),
      'BL' => $t('Saint BarthÃ©lemy'),
      'BM' => $t('Bermuda'),
      'BN' => $t('Brunei'),
      'BO' => $t('Bolivia'),
      'BR' => $t('Brazil'),
      'BS' => $t('Bahamas'),
      'BT' => $t('Bhutan'),
      'BV' => $t('Bouvet Island'),
      'BW' => $t('Botswana'),
      'BY' => $t('Belarus'),
      'BZ' => $t('Belize'),
      'CA' => $t('Canada'),
      'CC' => $t('Cocos (Keeling) Islands'),
      'CD' => $t('Congo (Kinshasa)'),
      'CF' => $t('Central African Republic'),
      'CG' => $t('Congo (Brazzaville)'),
      'CH' => $t('Switzerland'),
      'CI' => $t('Ivory Coast'),
      'CK' => $t('Cook Islands'),
      'CL' => $t('Chile'),
      'CM' => $t('Cameroon'),
      'CN' => $t('China'),
      'CO' => $t('Colombia'),
      'CR' => $t('Costa Rica'),
      'CU' => $t('Cuba'),
      'CW' => $t('CuraÃ§ao'),
      'CV' => $t('Cape Verde'),
      'CX' => $t('Christmas Island'),
      'CY' => $t('Cyprus'),
      'CZ' => $t('Czech Republic'),
      'DE' => $t('Germany'),
      'DJ' => $t('Djibouti'),
      'DK' => $t('Denmark'),
      'DM' => $t('Dominica'),
      'DO' => $t('Dominican Republic'),
      'DZ' => $t('Algeria'),
      'EC' => $t('Ecuador'),
      'EE' => $t('Estonia'),
      'EG' => $t('Egypt'),
      'EH' => $t('Western Sahara'),
      'ER' => $t('Eritrea'),
      'ES' => $t('Spain'),
      'ET' => $t('Ethiopia'),
      'FI' => $t('Finland'),
      'FJ' => $t('Fiji'),
      'FK' => $t('Falkland Islands'),
      'FM' => $t('Micronesia'),
      'FO' => $t('Faroe Islands'),
      'FR' => $t('France'),
      'GA' => $t('Gabon'),
      'GB' => $t('United Kingdom'),
      'GD' => $t('Grenada'),
      'GE' => $t('Georgia'),
      'GF' => $t('French Guiana'),
      'GG' => $t('Guernsey'),
      'GH' => $t('Ghana'),
      'GI' => $t('Gibraltar'),
      'GL' => $t('Greenland'),
      'GM' => $t('Gambia'),
      'GN' => $t('Guinea'),
      'GP' => $t('Guadeloupe'),
      'GQ' => $t('Equatorial Guinea'),
      'GR' => $t('Greece'),
      'GS' => $t('South Georgia and the South Sandwich Islands'),
      'GT' => $t('Guatemala'),
      'GU' => $t('Guam'),
      'GW' => $t('Guinea-Bissau'),
      'GY' => $t('Guyana'),
      'HK' => $t('Hong Kong S.A.R., China'),
      'HM' => $t('Heard Island and McDonald Islands'),
      'HN' => $t('Honduras'),
      'HR' => $t('Croatia'),
      'HT' => $t('Haiti'),
      'HU' => $t('Hungary'),
      'ID' => $t('Indonesia'),
      'IE' => $t('Ireland'),
      'IL' => $t('Israel'),
      'IM' => $t('Isle of Man'),
      'IN' => $t('India'),
      'IO' => $t('British Indian Ocean Territory'),
      'IQ' => $t('Iraq'),
      'IR' => $t('Iran'),
      'IS' => $t('Iceland'),
      'IT' => $t('Italy'),
      'JE' => $t('Jersey'),
      'JM' => $t('Jamaica'),
      'JO' => $t('Jordan'),
      'JP' => $t('Japan'),
      'KE' => $t('Kenya'),
      'KG' => $t('Kyrgyzstan'),
      'KH' => $t('Cambodia'),
      'KI' => $t('Kiribati'),
      'KM' => $t('Comoros'),
      'KN' => $t('Saint Kitts and Nevis'),
      'KP' => $t('North Korea'),
      'KR' => $t('South Korea'),
      'KW' => $t('Kuwait'),
      'KY' => $t('Cayman Islands'),
      'KZ' => $t('Kazakhstan'),
      'LA' => $t('Laos'),
      'LB' => $t('Lebanon'),
      'LC' => $t('Saint Lucia'),
      'LI' => $t('Liechtenstein'),
      'LK' => $t('Sri Lanka'),
      'LR' => $t('Liberia'),
      'LS' => $t('Lesotho'),
      'LT' => $t('Lithuania'),
      'LU' => $t('Luxembourg'),
      'LV' => $t('Latvia'),
      'LY' => $t('Libya'),
      'MA' => $t('Morocco'),
      'MC' => $t('Monaco'),
      'MD' => $t('Moldova'),
      'ME' => $t('Montenegro'),
      'MF' => $t('Saint Martin (French part)'),
      'MG' => $t('Madagascar'),
      'MH' => $t('Marshall Islands'),
      'MK' => $t('Macedonia'),
      'ML' => $t('Mali'),
      'MM' => $t('Myanmar'),
      'MN' => $t('Mongolia'),
      'MO' => $t('Macao S.A.R., China'),
      'MP' => $t('Northern Mariana Islands'),
      'MQ' => $t('Martinique'),
      'MR' => $t('Mauritania'),
      'MS' => $t('Montserrat'),
      'MT' => $t('Malta'),
      'MU' => $t('Mauritius'),
      'MV' => $t('Maldives'),
      'MW' => $t('Malawi'),
      'MX' => $t('Mexico'),
      'MY' => $t('Malaysia'),
      'MZ' => $t('Mozambique'),
      'NA' => $t('Namibia'),
      'NC' => $t('New Caledonia'),
      'NE' => $t('Niger'),
      'NF' => $t('Norfolk Island'),
      'NG' => $t('Nigeria'),
      'NI' => $t('Nicaragua'),
      'NL' => $t('Netherlands'),
      'NO' => $t('Norway'),
      'NP' => $t('Nepal'),
      'NR' => $t('Nauru'),
      'NU' => $t('Niue'),
      'NZ' => $t('New Zealand'),
      'OM' => $t('Oman'),
      'PA' => $t('Panama'),
      'PE' => $t('Peru'),
      'PF' => $t('French Polynesia'),
      'PG' => $t('Papua New Guinea'),
      'PH' => $t('Philippines'),
      'PK' => $t('Pakistan'),
      'PL' => $t('Poland'),
      'PM' => $t('Saint Pierre and Miquelon'),
      'PN' => $t('Pitcairn'),
      'PR' => $t('Puerto Rico'),
      'PS' => $t('Palestinian Territory'),
      'PT' => $t('Portugal'),
      'PW' => $t('Palau'),
      'PY' => $t('Paraguay'),
      'QA' => $t('Qatar'),
      'RE' => $t('Reunion'),
      'RO' => $t('Romania'),
      'RS' => $t('Serbia'),
      'RU' => $t('Russia'),
      'RW' => $t('Rwanda'),
      'SA' => $t('Saudi Arabia'),
      'SB' => $t('Solomon Islands'),
      'SC' => $t('Seychelles'),
      'SD' => $t('Sudan'),
      'SE' => $t('Sweden'),
      'SG' => $t('Singapore'),
      'SH' => $t('Saint Helena'),
      'SI' => $t('Slovenia'),
      'SJ' => $t('Svalbard and Jan Mayen'),
      'SK' => $t('Slovakia'),
      'SL' => $t('Sierra Leone'),
      'SM' => $t('San Marino'),
      'SN' => $t('Senegal'),
      'SO' => $t('Somalia'),
      'SR' => $t('Suriname'),
      'ST' => $t('Sao Tome and Principe'),
      'SV' => $t('El Salvador'),
      'SY' => $t('Syria'),
      'SZ' => $t('Swaziland'),
      'TC' => $t('Turks and Caicos Islands'),
      'TD' => $t('Chad'),
      'TF' => $t('French Southern Territories'),
      'TG' => $t('Togo'),
      'TH' => $t('Thailand'),
      'TJ' => $t('Tajikistan'),
      'TK' => $t('Tokelau'),
      'TL' => $t('Timor-Leste'),
      'TM' => $t('Turkmenistan'),
      'TN' => $t('Tunisia'),
      'TO' => $t('Tonga'),
      'TR' => $t('Turkey'),
      'TT' => $t('Trinidad and Tobago'),
      'TV' => $t('Tuvalu'),
      'TW' => $t('Taiwan'),
      'TZ' => $t('Tanzania'),
      'UA' => $t('Ukraine'),
      'UG' => $t('Uganda'),
      'UM' => $t('United States Minor Outlying Islands'),
      'US' => $t('United States'),
      'UY' => $t('Uruguay'),
      'UZ' => $t('Uzbekistan'),
      'VA' => $t('Vatican'),
      'VC' => $t('Saint Vincent and the Grenadines'),
      'VE' => $t('Venezuela'),
      'VG' => $t('British Virgin Islands'),
      'VI' => $t('U.S. Virgin Islands'),
      'VN' => $t('Vietnam'),
      'VU' => $t('Vanuatu'),
      'WF' => $t('Wallis and Futuna'),
      'WS' => $t('Samoa'),
      'YE' => $t('Yemen'),
      'YT' => $t('Mayotte'),
      'ZA' => $t('South Africa'),
      'ZM' => $t('Zambia'),
      'ZW' => $t('Zimbabwe'),
    );

    // Sort the list.
    natcasesort($countries);

    return $countries;
  }

  /**
   * @ingroup locale-api-predefined List of predefined languages
   * @{
   */

  /**
   * Some of the common languages with their English and native names
   *
   * Based on ISO 639 and http://people.w3.org/rishida/names/languages.html
   */
  function _locale_get_predefined_list() {
    return array(
      'aa' => array('Afar'),
      'ab' => array('Abkhazian', 'Ð°Ò§ÑÑƒÐ° Ð±Ñ‹Ð·ÑˆÓ™Ð°'),
      'ae' => array('Avestan'),
      'af' => array('Afrikaans'),
      'ak' => array('Akan'),
      'am' => array('Amharic', 'áŠ áˆ›áˆ­áŠ›'),
      'ar' => array('Arabic', /* Left-to-right marker "â€­" */ 'Ø§Ù„Ø¹Ø±Ø¨ÙŠØ©', LANGUAGE_RTL),
      'as' => array('Assamese'),
      'ast' => array('Asturian'),
      'av' => array('Avar'),
      'ay' => array('Aymara'),
      'az' => array('Azerbaijani', 'azÉ™rbaycan'),
      'ba' => array('Bashkir'),
      'be' => array('Belarusian', 'Ð‘ÐµÐ»Ð°Ñ€ÑƒÑÐºÐ°Ñ'),
      'bg' => array('Bulgarian', 'Ð‘ÑŠÐ»Ð³Ð°Ñ€ÑÐºÐ¸'),
      'bh' => array('Bihari'),
      'bi' => array('Bislama'),
      'bm' => array('Bambara', 'Bamanankan'),
      'bn' => array('Bengali'),
      'bo' => array('Tibetan'),
      'br' => array('Breton'),
      'bs' => array('Bosnian', 'Bosanski'),
      'ca' => array('Catalan', 'CatalÃ '),
      'ce' => array('Chechen'),
      'ch' => array('Chamorro'),
      'co' => array('Corsican'),
      'cr' => array('Cree'),
      'cs' => array('Czech', 'ÄŒeÅ¡tina'),
      'cu' => array('Old Slavonic'),
      'cv' => array('Chuvash'),
      'cy' => array('Welsh', 'Cymraeg'),
      'da' => array('Danish', 'Dansk'),
      'de' => array('German', 'Deutsch'),
      'dv' => array('Maldivian'),
      'dz' => array('Bhutani'),
      'ee' => array('Ewe', 'ÆÊ‹É›'),
      'el' => array('Greek', 'Î•Î»Î»Î·Î½Î¹ÎºÎ¬'),
      'en' => array('English'),
      'en-gb' => array('English, British'),
      'eo' => array('Esperanto'),
      'es' => array('Spanish', 'EspaÃ±ol'),
      'et' => array('Estonian', 'Eesti'),
      'eu' => array('Basque', 'Euskera'),
      'fa' => array('Persian', /* Left-to-right marker "â€­" */ 'ÙØ§Ø±Ø³ÛŒ', LANGUAGE_RTL),
      'ff' => array('Fulah', 'Fulfulde'),
      'fi' => array('Finnish', 'Suomi'),
      'fil' => array('Filipino'),
      'fj' => array('Fiji'),
      'fo' => array('Faeroese'),
      'fr' => array('French', 'FranÃ§ais'),
      'fy' => array('Frisian', 'Frysk'),
      'ga' => array('Irish', 'Gaeilge'),
      'gd' => array('Scots Gaelic'),
      'gl' => array('Galician', 'Galego'),
      'gn' => array('Guarani'),
      'gsw-berne' => array('Swiss German'),
      'gu' => array('Gujarati'),
      'gv' => array('Manx'),
      'ha' => array('Hausa'),
      'he' => array('Hebrew', /* Left-to-right marker "â€­" */ '×¢×‘×¨×™×ª', LANGUAGE_RTL),
      'hi' => array('Hindi', 'à¤¹à¤¿à¤¨à¥à¤¦à¥€'),
      'ho' => array('Hiri Motu'),
      'hr' => array('Croatian', 'Hrvatski'),
      'ht' => array('Haitian Creole'),
      'hu' => array('Hungarian', 'Magyar'),
      'hy' => array('Armenian', 'Õ€Õ¡ÕµÕ¥Ö€Õ¥Õ¶'),
      'hz' => array('Herero'),
      'ia' => array('Interlingua'),
      'id' => array('Indonesian', 'Bahasa Indonesia'),
      'ie' => array('Interlingue'),
      'ig' => array('Igbo'),
      'ik' => array('Inupiak'),
      'is' => array('Icelandic', 'Ãslenska'),
      'it' => array('Italian', 'Italiano'),
      'iu' => array('Inuktitut'),
      'ja' => array('Japanese', 'æ—¥æœ¬èªž'),
      'jv' => array('Javanese'),
      'ka' => array('Georgian'),
      'kg' => array('Kongo'),
      'ki' => array('Kikuyu'),
      'kj' => array('Kwanyama'),
      'kk' => array('Kazakh', 'ÒšÐ°Ð·Ð°Ò›'),
      'kl' => array('Greenlandic'),
      'km' => array('Cambodian'),
      'kn' => array('Kannada', 'à²•à²¨à³à²¨à²¡'),
      'ko' => array('Korean', 'í•œêµ­ì–´'),
      'kr' => array('Kanuri'),
      'ks' => array('Kashmiri'),
      'ku' => array('Kurdish', 'KurdÃ®'),
      'kv' => array('Komi'),
      'kw' => array('Cornish'),
      'ky' => array('Kyrgyz', 'ÐšÑ‹Ñ€Ð³Ñ‹Ð·Ñ‡Ð°'),
      'la' => array('Latin', 'Latina'),
      'lb' => array('Luxembourgish'),
      'lg' => array('Luganda'),
      'ln' => array('Lingala'),
      'lo' => array('Laothian'),
      'lt' => array('Lithuanian', 'LietuviÅ³'),
      'lv' => array('Latvian', 'LatvieÅ¡u'),
      'mg' => array('Malagasy'),
      'mh' => array('Marshallese'),
      'mi' => array('MÄori'),
      'mk' => array('Macedonian', 'ÐœÐ°ÐºÐµÐ´Ð¾Ð½ÑÐºÐ¸'),
      'ml' => array('Malayalam', 'à´®à´²à´¯à´¾à´³à´‚'),
      'mn' => array('Mongolian'),
      'mo' => array('Moldavian'),
      'mr' => array('Marathi'),
      'ms' => array('Malay', 'Bahasa Melayu'),
      'mt' => array('Maltese', 'Malti'),
      'my' => array('Burmese'),
      'na' => array('Nauru'),
      'nd' => array('North Ndebele'),
      'ne' => array('Nepali'),
      'ng' => array('Ndonga'),
      'nl' => array('Dutch', 'Nederlands'),
      'nb' => array('Norwegian BokmÃ¥l', 'BokmÃ¥l'),
      'nn' => array('Norwegian Nynorsk', 'Nynorsk'),
      'nr' => array('South Ndebele'),
      'nv' => array('Navajo'),
      'ny' => array('Chichewa'),
      'oc' => array('Occitan'),
      'om' => array('Oromo'),
      'or' => array('Oriya'),
      'os' => array('Ossetian'),
      'pa' => array('Punjabi'),
      'pi' => array('Pali'),
      'pl' => array('Polish', 'Polski'),
      'ps' => array('Pashto', /* Left-to-right marker "â€­" */ 'Ù¾ÚšØªÙˆ', LANGUAGE_RTL),
      'pt' => array('Portuguese, International'),
      'pt-pt' => array('Portuguese, Portugal', 'PortuguÃªs'),
      'pt-br' => array('Portuguese, Brazil', 'PortuguÃªs'),
      'qu' => array('Quechua'),
      'rm' => array('Rhaeto-Romance'),
      'rn' => array('Kirundi'),
      'ro' => array('Romanian', 'RomÃ¢nÄƒ'),
      'ru' => array('Russian', 'Ð ÑƒÑÑÐºÐ¸Ð¹'),
      'rw' => array('Kinyarwanda'),
      'sa' => array('Sanskrit'),
      'sc' => array('Sardinian'),
      'sco' => array('Scots'),
      'sd' => array('Sindhi'),
      'se' => array('Northern Sami'),
      'sg' => array('Sango'),
      'sh' => array('Serbo-Croatian'),
      'si' => array('Sinhala', 'à·ƒà·’à¶‚à·„à¶½'),
      'sk' => array('Slovak', 'SlovenÄina'),
      'sl' => array('Slovenian', 'SlovenÅ¡Äina'),
      'sm' => array('Samoan'),
      'sn' => array('Shona'),
      'so' => array('Somali'),
      'sq' => array('Albanian', 'Shqip'),
      'sr' => array('Serbian', 'Ð¡Ñ€Ð¿ÑÐºÐ¸'),
      'ss' => array('Siswati'),
      'st' => array('Sesotho'),
      'su' => array('Sudanese'),
      'sv' => array('Swedish', 'Svenska'),
      'sw' => array('Swahili', 'Kiswahili'),
      'ta' => array('Tamil', 'à®¤à®®à®¿à®´à¯'),
      'te' => array('Telugu', 'à°¤à±†à°²à±à°—à±'),
      'tg' => array('Tajik'),
      'th' => array('Thai', 'à¸ à¸²à¸©à¸²à¹„à¸—à¸¢'),
      'ti' => array('Tigrinya'),
      'tk' => array('Turkmen'),
      'tl' => array('Tagalog'),
      'tn' => array('Setswana'),
      'to' => array('Tonga'),
      'tr' => array('Turkish', 'TÃ¼rkÃ§e'),
      'ts' => array('Tsonga'),
      'tt' => array('Tatar', 'TatarÃ§a'),
      'tw' => array('Twi'),
      'ty' => array('Tahitian'),
      'ug' => array('Uyghur'),
      'uk' => array('Ukrainian', 'Ð£ÐºÑ€Ð°Ñ—Ð½ÑÑŒÐºÐ°'),
      'ur' => array('Urdu', /* Left-to-right marker "â€­" */ 'Ø§Ø±Ø¯Ùˆ', LANGUAGE_RTL),
      'uz' => array('Uzbek', "o'zbek"),
      've' => array('Venda'),
      'vi' => array('Vietnamese', 'Tiáº¿ng Viá»‡t'),
      'wo' => array('Wolof'),
      'xh' => array('Xhosa', 'isiXhosa'),
      'xx-lolspeak' => array('Lolspeak'),
      'yi' => array('Yiddish'),
      'yo' => array('Yoruba', 'YorÃ¹bÃ¡'),
      'za' => array('Zhuang'),
      'zh-hans' => array('Chinese, Simplified', 'ç®€ä½“ä¸­æ–‡'),
      'zh-hant' => array('Chinese, Traditional', 'ç¹é«”ä¸­æ–‡'),
      'zu' => array('Zulu', 'isiZulu'),
    );
  }

  /**
 * @} End of "locale-api-languages-predefined"
 */
