.class public Lcom/bianfeng/ymnsdk/sysfunc/SysfuncPlus;
.super Ljava/lang/Object;
.source "SysfuncPlus.java"


# static fields
.field private static list:Ljava/util/List; = null
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;>;"
        }
    .end annotation
.end field

.field static locationListener:Landroid/location/LocationListener; = null

.field static locationManager:Landroid/location/LocationManager; = null

.field private static mActivity:Landroid/app/Activity; = null

.field private static mAllApps:Ljava/util/List; = null
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Landroid/content/pm/ResolveInfo;",
            ">;"
        }
    .end annotation
.end field

.field private static mPackageManager:Landroid/content/pm/PackageManager; = null

.field static final nInt:I = 0x1

.field static final nString:I = 0x0

.field static sConName:Ljava/lang/String; = "config"

.field static tel:Landroid/telephony/TelephonyManager;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 308
    new-instance v0, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncPlus$1;

    invoke-direct {v0}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncPlus$1;-><init>()V

    sput-object v0, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncPlus;->locationListener:Landroid/location/LocationListener;

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 44
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static CopyToClipboard(Ljava/lang/String;Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;)V
    .locals 1

    .line 239
    sget-object v0, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncPlus;->mActivity:Landroid/app/Activity;

    if-eqz v0, :cond_0

    invoke-static {}, Lcom/bianfeng/ymnsdk/util/cache/YmnSharedPreferencesUtils;->isYmnClipAllow()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 240
    sget-object p1, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncPlus;->mActivity:Landroid/app/Activity;

    const-string v0, "clipboard"

    invoke-virtual {p1, v0}, Landroid/app/Activity;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Landroid/content/ClipboardManager;

    const-string v0, "data"

    .line 241
    invoke-static {v0, p0}, Landroid/content/ClipData;->newPlainText(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Landroid/content/ClipData;

    move-result-object p0

    .line 242
    invoke-virtual {p1, p0}, Landroid/content/ClipboardManager;->setPrimaryClip(Landroid/content/ClipData;)V

    goto :goto_0

    :cond_0
    const/16 p0, 0x450

    const-string v0, "sysfunc is not init"

    .line 244
    invoke-virtual {p1, p0, v0}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->sendResult(ILjava/lang/String;)V

    :goto_0
    return-void
.end method

.method public static GetLatitudeAndLongitude(Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;)V
    .locals 2

    .line 249
    sget-object v0, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncPlus;->mActivity:Landroid/app/Activity;

    if-eqz v0, :cond_1

    .line 250
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncPlus;->isGpsOpen(Landroid/content/Context;)Z

    move-result v0

    if-eqz v0, :cond_0

    const-string v0, "isGpsOpen = true"

    .line 251
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I

    .line 252
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncPlus;->getGPS(Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;)V

    goto :goto_0

    :cond_0
    const-string v0, "isGpsOpen = false"

    .line 254
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I

    const/16 v0, 0x44f

    const-string v1, "GPS Provider is disabled"

    .line 255
    invoke-virtual {p0, v0, v1}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->sendResult(ILjava/lang/String;)V

    goto :goto_0

    :cond_1
    const/16 v0, 0x450

    const-string v1, "sysfunc is not init"

    .line 258
    invoke-virtual {p0, v0, v1}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->sendResult(ILjava/lang/String;)V

    :goto_0
    return-void
.end method

.method public static LoadStringData(Ljava/lang/String;)Ljava/lang/String;
    .locals 2

    .line 151
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "LoadStringData key : "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I

    const/4 v0, 0x0

    .line 152
    invoke-static {p0, v0}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncPlus;->Readconfig(Ljava/lang/String;I)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static Readconfig(Ljava/lang/String;I)Ljava/lang/String;
    .locals 4

    const/4 v0, 0x0

    .line 209
    :try_start_0
    sget-object v1, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncPlus;->mActivity:Landroid/app/Activity;

    sget-object v2, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncPlus;->sConName:Ljava/lang/String;

    invoke-virtual {v1, v2, v0}, Landroid/app/Activity;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v1

    .line 212
    invoke-virtual {v1}, Ljava/lang/Exception;->printStackTrace()V

    const/4 v1, 0x0

    :goto_0
    const-string v2, ""

    if-nez p1, :cond_2

    if-nez v1, :cond_0

    return-object v2

    .line 219
    :cond_0
    invoke-interface {v1, p0}, Landroid/content/SharedPreferences;->contains(Ljava/lang/String;)Z

    move-result p1

    if-eqz p1, :cond_1

    .line 220
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "Readconfig lable: "

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I

    .line 221
    invoke-interface {v1, p0, v2}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    .line 222
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "Readconfig: "

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I

    return-object p0

    :cond_1
    return-object v2

    :cond_2
    const/4 v3, 0x1

    if-ne p1, v3, :cond_5

    const-string p1, "0"

    if-nez v1, :cond_3

    return-object p1

    .line 230
    :cond_3
    invoke-interface {v1, p0}, Landroid/content/SharedPreferences;->contains(Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_4

    .line 231
    invoke-interface {v1, p0, v0}, Landroid/content/SharedPreferences;->getInt(Ljava/lang/String;I)I

    move-result p0

    invoke-static {p0}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object p0

    return-object p0

    :cond_4
    return-object p1

    :cond_5
    return-object v2
.end method

.method public static RemoveConfig(Ljava/lang/String;)V
    .locals 3

    .line 192
    :try_start_0
    sget-object v0, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncPlus;->mActivity:Landroid/app/Activity;

    sget-object v1, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncPlus;->sConName:Ljava/lang/String;

    const/4 v2, 0x0

    invoke-virtual {v0, v1, v2}, Landroid/app/Activity;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v0

    .line 195
    invoke-interface {v0}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object v0

    if-eqz p0, :cond_0

    .line 196
    invoke-virtual {p0}, Ljava/lang/String;->length()I

    move-result v1

    if-lez v1, :cond_0

    .line 197
    invoke-interface {v0, p0}, Landroid/content/SharedPreferences$Editor;->remove(Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    .line 198
    invoke-interface {v0}, Landroid/content/SharedPreferences$Editor;->commit()Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    .line 201
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_0
    :goto_0
    return-void
.end method

.method public static RemoveData(Ljava/lang/String;)V
    .locals 2

    .line 157
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "RemoveData key : "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I

    .line 158
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncPlus;->RemoveConfig(Ljava/lang/String;)V

    return-void
.end method

.method public static SaveStringData(Ljava/lang/String;[B)V
    .locals 2

    .line 144
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "SaveStringData key : "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I

    .line 145
    new-instance v0, Ljava/lang/String;

    invoke-direct {v0, p1}, Ljava/lang/String;-><init>([B)V

    const/4 p1, 0x0

    .line 146
    invoke-static {p0, v0, p1}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncPlus;->WriteConfig(Ljava/lang/String;Ljava/lang/String;I)V

    return-void
.end method

.method public static WriteConfig(Ljava/lang/String;Ljava/lang/String;I)V
    .locals 3

    .line 167
    :try_start_0
    sget-object v0, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncPlus;->mActivity:Landroid/app/Activity;

    sget-object v1, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncPlus;->sConName:Ljava/lang/String;

    const/4 v2, 0x0

    invoke-virtual {v0, v1, v2}, Landroid/app/Activity;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v0

    .line 169
    invoke-interface {v0}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object v0

    if-eqz p0, :cond_2

    .line 170
    invoke-virtual {p0}, Ljava/lang/String;->length()I

    move-result v1

    if-lez v1, :cond_2

    if-eqz p1, :cond_2

    if-nez p2, :cond_0

    .line 172
    invoke-interface {v0, p0, p1}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_1

    goto :goto_0

    :cond_0
    const/4 v1, 0x1

    if-ne p2, v1, :cond_1

    .line 175
    :try_start_1
    invoke-static {p1}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result p1

    .line 176
    invoke-interface {v0, p0, p1}, Landroid/content/SharedPreferences$Editor;->putInt(Ljava/lang/String;I)Landroid/content/SharedPreferences$Editor;
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    .line 178
    :try_start_2
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    .line 181
    :cond_1
    :goto_0
    invoke-interface {v0}, Landroid/content/SharedPreferences$Editor;->commit()Z
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_1

    goto :goto_1

    :catch_1
    move-exception p0

    .line 184
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_2
    :goto_1
    return-void
.end method

.method public static deleteApk(Ljava/lang/String;)V
    .locals 2

    .line 100
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "deleteApk : "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I

    .line 102
    new-instance v0, Ljava/io/File;

    invoke-direct {v0, p0}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    const-string p0, "AC do Local APK file exist?"

    .line 103
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I

    .line 104
    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result p0

    if-nez p0, :cond_0

    return-void

    :cond_0
    const-string p0, "AC delete file"

    .line 106
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I

    .line 107
    invoke-virtual {v0}, Ljava/io/File;->delete()Z

    move-result p0

    if-eqz p0, :cond_1

    const-string p0, "AC delete success"

    .line 108
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I

    goto :goto_0

    :cond_1
    const-string p0, "AC delete failed"

    .line 110
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I

    :goto_0
    return-void
.end method

.method public static getGPS(Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;)V
    .locals 9

    .line 281
    sget-object v0, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncPlus;->locationManager:Landroid/location/LocationManager;

    const/16 v1, 0x44e

    if-nez v0, :cond_0

    const-string v0, "get gps failed, locationManager is null"

    .line 282
    invoke-virtual {p0, v1, v0}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->sendResult(ILjava/lang/String;)V

    return-void

    :cond_0
    const-string v2, "network"

    .line 285
    invoke-virtual {v0, v2}, Landroid/location/LocationManager;->isProviderEnabled(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 286
    sget-object v3, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncPlus;->locationManager:Landroid/location/LocationManager;

    const-wide/32 v5, 0xea60

    const/high16 v7, 0x3f800000    # 1.0f

    sget-object v8, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncPlus;->locationListener:Landroid/location/LocationListener;

    const-string v4, "network"

    invoke-virtual/range {v3 .. v8}, Landroid/location/LocationManager;->requestLocationUpdates(Ljava/lang/String;JFLandroid/location/LocationListener;)V

    .line 287
    sget-object v0, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncPlus;->locationManager:Landroid/location/LocationManager;

    invoke-virtual {v0, v2}, Landroid/location/LocationManager;->getLastKnownLocation(Ljava/lang/String;)Landroid/location/Location;

    move-result-object v0

    goto :goto_0

    .line 288
    :cond_1
    sget-object v0, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncPlus;->locationManager:Landroid/location/LocationManager;

    const-string v2, "gps"

    invoke-virtual {v0, v2}, Landroid/location/LocationManager;->isProviderEnabled(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_2

    .line 289
    sget-object v3, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncPlus;->locationManager:Landroid/location/LocationManager;

    const-wide/32 v5, 0xea60

    const/high16 v7, 0x3f800000    # 1.0f

    sget-object v8, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncPlus;->locationListener:Landroid/location/LocationListener;

    const-string v4, "gps"

    invoke-virtual/range {v3 .. v8}, Landroid/location/LocationManager;->requestLocationUpdates(Ljava/lang/String;JFLandroid/location/LocationListener;)V

    .line 290
    sget-object v0, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncPlus;->locationManager:Landroid/location/LocationManager;

    invoke-virtual {v0, v2}, Landroid/location/LocationManager;->getLastKnownLocation(Ljava/lang/String;)Landroid/location/Location;

    move-result-object v0

    goto :goto_0

    :cond_2
    const/4 v0, 0x0

    :goto_0
    if-eqz v0, :cond_3

    .line 293
    invoke-virtual {v0}, Landroid/location/Location;->getLatitude()D

    move-result-wide v1

    .line 294
    invoke-virtual {v0}, Landroid/location/Location;->getLongitude()D

    move-result-wide v3

    .line 295
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    :try_start_0
    const-string v5, "latitude"

    .line 297
    invoke-virtual {v0, v5, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;D)Lorg/json/JSONObject;

    const-string v1, "longitude"

    .line 298
    invoke-virtual {v0, v1, v3, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;D)Lorg/json/JSONObject;
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_1

    :catch_0
    move-exception v1

    .line 300
    invoke-virtual {v1}, Lorg/json/JSONException;->printStackTrace()V

    :goto_1
    const/16 v1, 0x44d

    .line 302
    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v1, v0}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->sendResult(ILjava/lang/String;)V

    goto :goto_2

    :cond_3
    const-string v0, "get gps failed,location is null"

    .line 304
    invoke-virtual {p0, v1, v0}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->sendResult(ILjava/lang/String;)V

    :goto_2
    return-void
.end method

.method public static getPhoneNumber(Landroid/content/Context;)Ljava/lang/String;
    .locals 2

    .line 117
    sget-object p0, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncPlus;->mActivity:Landroid/app/Activity;

    const-string v0, "phone"

    invoke-virtual {p0, v0}, Landroid/app/Activity;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Landroid/telephony/TelephonyManager;

    sput-object p0, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncPlus;->tel:Landroid/telephony/TelephonyManager;

    .line 118
    invoke-virtual {p0}, Landroid/telephony/TelephonyManager;->getLine1Number()Ljava/lang/String;

    move-result-object p0

    .line 119
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "getPhoneNumber1: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I

    return-object p0
.end method

.method public static init(Landroid/content/Context;)V
    .locals 0

    .line 58
    check-cast p0, Landroid/app/Activity;

    sput-object p0, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncPlus;->mActivity:Landroid/app/Activity;

    return-void
.end method

.method public static installApk(Ljava/lang/String;Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;)V
    .locals 3

    .line 62
    sget-object v0, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncPlus;->mActivity:Landroid/app/Activity;

    if-eqz v0, :cond_2

    .line 64
    :try_start_0
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "chmod 777 "

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    .line 65
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "command = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I

    .line 66
    invoke-static {}, Ljava/lang/Runtime;->getRuntime()Ljava/lang/Runtime;

    move-result-object v0

    .line 67
    invoke-virtual {v0, p1}, Ljava/lang/Runtime;->exec(Ljava/lang/String;)Ljava/lang/Process;
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    const-string v0, "debug"

    const-string v1, "chmod fail!!!!"

    .line 69
    invoke-static {v0, v1}, Landroid/util/Log;->v(Ljava/lang/String;Ljava/lang/String;)I

    .line 70
    invoke-virtual {p1}, Ljava/io/IOException;->printStackTrace()V

    .line 73
    :goto_0
    new-instance p1, Ljava/io/File;

    invoke-direct {p1, p0}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    const-string p0, "AC do Local APK file exist?"

    .line 74
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I

    .line 75
    invoke-virtual {p1}, Ljava/io/File;->exists()Z

    move-result p0

    if-nez p0, :cond_0

    return-void

    :cond_0
    const-string p0, "AC yes"

    .line 77
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I

    .line 78
    new-instance p0, Landroid/content/Intent;

    const-string v0, "android.intent.action.VIEW"

    invoke-direct {p0, v0}, Landroid/content/Intent;-><init>(Ljava/lang/String;)V

    const/high16 v0, 0x10000000

    .line 79
    invoke-virtual {p0, v0}, Landroid/content/Intent;->addFlags(I)Landroid/content/Intent;

    const-string v0, "AC new intent"

    .line 80
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I

    .line 83
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x18

    if-lt v0, v1, :cond_1

    const/4 v0, 0x1

    .line 84
    invoke-virtual {p0, v0}, Landroid/content/Intent;->addFlags(I)Landroid/content/Intent;

    .line 85
    invoke-static {}, Lcom/bianfeng/platform/executor/AppConfig;->getContext()Landroid/content/Context;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Lcom/bianfeng/platform/executor/AppConfig;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-virtual {v2}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, ".fileprovider"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1, p1}, Landroid/support/v4/content/FileProvider;->getUriForFile(Landroid/content/Context;Ljava/lang/String;Ljava/io/File;)Landroid/net/Uri;

    move-result-object p1

    goto :goto_1

    .line 87
    :cond_1
    invoke-static {p1}, Landroid/net/Uri;->fromFile(Ljava/io/File;)Landroid/net/Uri;

    move-result-object p1

    :goto_1
    const-string v0, "application/vnd.android.package-archive"

    .line 89
    invoke-virtual {p0, p1, v0}, Landroid/content/Intent;->setDataAndType(Landroid/net/Uri;Ljava/lang/String;)Landroid/content/Intent;

    const-string p1, "AC start action"

    .line 91
    invoke-static {p1}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I

    .line 92
    sget-object p1, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncPlus;->mActivity:Landroid/app/Activity;

    invoke-virtual {p1, p0}, Landroid/app/Activity;->startActivity(Landroid/content/Intent;)V

    goto :goto_2

    :cond_2
    const/16 p0, 0x44c

    const-string v0, "sysfunc is not init"

    .line 94
    invoke-virtual {p1, p0, v0}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->sendResult(ILjava/lang/String;)V

    :goto_2
    return-void
.end method

.method public static isGpsOpen(Landroid/content/Context;)Z
    .locals 3

    const-string v0, "location"

    .line 263
    invoke-virtual {p0, v0}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Landroid/location/LocationManager;

    sput-object p0, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncPlus;->locationManager:Landroid/location/LocationManager;

    const/4 v0, 0x0

    if-nez p0, :cond_0

    const-string p0, "locationManager is null"

    .line 265
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I

    return v0

    :cond_0
    const-string v1, "gps"

    .line 269
    invoke-virtual {p0, v1}, Landroid/location/LocationManager;->isProviderEnabled(Ljava/lang/String;)Z

    move-result p0

    .line 271
    sget-object v1, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncPlus;->locationManager:Landroid/location/LocationManager;

    const-string v2, "network"

    invoke-virtual {v1, v2}, Landroid/location/LocationManager;->isProviderEnabled(Ljava/lang/String;)Z

    move-result v1

    if-nez p0, :cond_2

    if-eqz v1, :cond_1

    goto :goto_0

    :cond_1
    return v0

    :cond_2
    :goto_0
    const/4 p0, 0x1

    return p0
.end method

.method public static openApp(Ljava/lang/String;Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;)V
    .locals 4

    .line 339
    new-instance v0, Landroid/content/Intent;

    const-string v1, "android.intent.action.MAIN"

    const/4 v2, 0x0

    invoke-direct {v0, v1, v2}, Landroid/content/Intent;-><init>(Ljava/lang/String;Landroid/net/Uri;)V

    const-string v1, "android.intent.category.LAUNCHER"

    .line 340
    invoke-virtual {v0, v1}, Landroid/content/Intent;->addCategory(Ljava/lang/String;)Landroid/content/Intent;

    .line 341
    sget-object v1, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncPlus;->mActivity:Landroid/app/Activity;

    invoke-virtual {v1}, Landroid/app/Activity;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v1

    sput-object v1, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncPlus;->mPackageManager:Landroid/content/pm/PackageManager;

    const/4 v2, 0x0

    .line 342
    invoke-virtual {v1, v0, v2}, Landroid/content/pm/PackageManager;->queryIntentActivities(Landroid/content/Intent;I)Ljava/util/List;

    move-result-object v0

    sput-object v0, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncPlus;->mAllApps:Ljava/util/List;

    .line 344
    new-instance v1, Landroid/content/pm/ResolveInfo$DisplayNameComparator;

    sget-object v2, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncPlus;->mPackageManager:Landroid/content/pm/PackageManager;

    invoke-direct {v1, v2}, Landroid/content/pm/ResolveInfo$DisplayNameComparator;-><init>(Landroid/content/pm/PackageManager;)V

    invoke-static {v0, v1}, Ljava/util/Collections;->sort(Ljava/util/List;Ljava/util/Comparator;)V

    .line 346
    sget-object v0, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncPlus;->mAllApps:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Landroid/content/pm/ResolveInfo;

    .line 348
    iget-object v2, v1, Landroid/content/pm/ResolveInfo;->activityInfo:Landroid/content/pm/ActivityInfo;

    iget-object v2, v2, Landroid/content/pm/ActivityInfo;->packageName:Ljava/lang/String;

    .line 349
    iget-object v1, v1, Landroid/content/pm/ResolveInfo;->activityInfo:Landroid/content/pm/ActivityInfo;

    iget-object v1, v1, Landroid/content/pm/ActivityInfo;->name:Ljava/lang/String;

    .line 351
    invoke-virtual {v2, p0}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v3

    if-eqz v3, :cond_0

    .line 352
    new-instance p0, Landroid/content/ComponentName;

    invoke-direct {p0, v2, v1}, Landroid/content/ComponentName;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    .line 353
    new-instance p1, Landroid/content/Intent;

    invoke-direct {p1}, Landroid/content/Intent;-><init>()V

    .line 354
    invoke-virtual {p1, p0}, Landroid/content/Intent;->setComponent(Landroid/content/ComponentName;)Landroid/content/Intent;

    const/high16 p0, 0x10000000

    .line 355
    invoke-virtual {p1, p0}, Landroid/content/Intent;->addFlags(I)Landroid/content/Intent;

    .line 356
    sget-object p0, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncPlus;->mActivity:Landroid/app/Activity;

    invoke-virtual {p0, p1}, Landroid/app/Activity;->startActivity(Landroid/content/Intent;)V

    return-void

    :cond_1
    const/16 p0, 0x45a

    const-string v0, "\u6ca1\u6709\u5b89\u88c5\u8be5app"

    .line 361
    invoke-virtual {p1, p0, v0}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->sendResult(ILjava/lang/String;)V

    return-void
.end method

.method public static sendSms(Ljava/lang/String;Ljava/lang/String;)I
    .locals 9

    .line 124
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "sendSms number:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, ", msg:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I

    .line 125
    invoke-static {p0}, Landroid/telephony/PhoneNumberUtils;->isGlobalPhoneNumber(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 126
    invoke-virtual {p0}, Ljava/lang/String;->length()I

    move-result v0

    if-lez v0, :cond_0

    invoke-virtual {p1}, Ljava/lang/String;->length()I

    move-result v0

    if-lez v0, :cond_0

    .line 127
    sget-object v0, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncPlus;->mActivity:Landroid/app/Activity;

    new-instance v1, Landroid/content/Intent;

    sget-object v2, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncPlus;->mActivity:Landroid/app/Activity;

    .line 128
    invoke-virtual {v2}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v3

    invoke-direct {v1, v2, v3}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    const/4 v2, 0x0

    .line 127
    invoke-static {v0, v2, v1, v2}, Landroid/app/PendingIntent;->getBroadcast(Landroid/content/Context;ILandroid/content/Intent;I)Landroid/app/PendingIntent;

    move-result-object v7

    .line 129
    invoke-static {}, Landroid/telephony/SmsManager;->getDefault()Landroid/telephony/SmsManager;

    move-result-object v3

    const/4 v5, 0x0

    const/4 v8, 0x0

    move-object v4, p0

    move-object v6, p1

    .line 130
    invoke-virtual/range {v3 .. v8}, Landroid/telephony/SmsManager;->sendTextMessage(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Landroid/app/PendingIntent;Landroid/app/PendingIntent;)V

    return v2

    :cond_0
    const/4 p0, 0x1

    return p0
.end method
