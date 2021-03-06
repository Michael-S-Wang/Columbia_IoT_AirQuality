#ifndef PROVISIONING_H_
#define PROVISIONING_H_

#define HTML_DATA_LINES		37

const char provisiongHtmlData[ 37 ][ 100 ] = { "<html>",
"  <head>",
"  <title>device config</title>",
"  </head>",
"  <body>",
"    <h1>device config</h1>",
"    <form action=\"provisioning\" method=\"POST\">",
"      <table width=\"100%\">",
"        <tr>",
"          <td align=\"right\">SSID</td>",
"          <td align=\"left\"><input type=\"text\" name=\"SSID\" size=\"64\"></td>",
"        </tr>",
"        <tr>",
"          <td align=\"right\">PASSWORD</td>",
"          <td align=\"left\"><input type=\"text\" name=\"PASSWORD\" size=\"64\"></td>",
"        </tr>",
"        <tr>",
"          <td align=\"right\">SECURITY</td>",
"          <td align=\"left\">",
"            <select name=\"SECURITY\">",
"              <option value=\"none\">none</option>",
"              <option value=\"wpa_personal\">WPA/WPA2 personal</option>",
"              <option value=\"wep\">WEP</option>",
"              <option value=\"wpa_enterprise\">WPA/WPA2 enterprise</option>",
"            </select>",
"          </td>",
"          </td>",
"        </tr>",
"<!-- additional keys go here -->",
"        <tr>",
"          <td align=\"right\">&nbsp;</td>",
"          <td align=\"left\"><input type=\"submit\"></td>",
"        </tr>",
"      </table>",
"    </form>",
"  </body>",
"</html>"};

#endif