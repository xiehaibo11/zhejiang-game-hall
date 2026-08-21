.class public Lcom/ss/android/socialbase/appdownloader/c/pt;
.super Ljava/lang/Object;


# static fields
.field private static c:Ljava/lang/String; = null

.field public static df:Ljava/lang/String; = ""

.field private static fw:Ljava/lang/String; = null

.field private static pp:Ljava/lang/String; = null

.field private static pt:Ljava/lang/String; = ""

.field public static q:Ljava/lang/String;

.field public static rg:Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public static b()Ljava/lang/String;
    .locals 1

    .line 288
    sget-object v0, Landroid/os/Build;->DISPLAY:Ljava/lang/String;

    if-nez v0, :cond_0

    const-string v0, ""

    goto :goto_0

    :cond_0
    sget-object v0, Landroid/os/Build;->DISPLAY:Ljava/lang/String;

    invoke-virtual {v0}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object v0

    :goto_0
    return-object v0
.end method

.method public static bm()Ljava/lang/String;
    .locals 1

    .line 283
    sget-object v0, Landroid/os/Build;->MANUFACTURER:Ljava/lang/String;

    if-nez v0, :cond_0

    const-string v0, ""

    goto :goto_0

    :cond_0
    sget-object v0, Landroid/os/Build;->MANUFACTURER:Ljava/lang/String;

    invoke-virtual {v0}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object v0

    :goto_0
    return-object v0
.end method

.method public static c()Z
    .locals 1

    const-string v0, "SAMSUNG"

    .line 111
    invoke-static {v0}, Lcom/ss/android/socialbase/appdownloader/c/pt;->rg(Ljava/lang/String;)Z

    move-result v0

    return v0
.end method

.method public static df(Ljava/lang/String;)Ljava/lang/String;
    .locals 6

    const/4 v0, 0x0

    const/4 v1, 0x1

    const/4 v2, 0x0

    .line 238
    :try_start_0
    invoke-static {}, Ljava/lang/Runtime;->getRuntime()Ljava/lang/Runtime;

    move-result-object v3

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "getprop "

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v3, p0}, Ljava/lang/Runtime;->exec(Ljava/lang/String;)Ljava/lang/Process;

    move-result-object p0

    .line 239
    new-instance v3, Ljava/io/BufferedReader;

    new-instance v4, Ljava/io/InputStreamReader;

    invoke-virtual {p0}, Ljava/lang/Process;->getInputStream()Ljava/io/InputStream;

    move-result-object p0

    invoke-direct {v4, p0}, Ljava/io/InputStreamReader;-><init>(Ljava/io/InputStream;)V

    const/16 p0, 0x400

    invoke-direct {v3, v4, p0}, Ljava/io/BufferedReader;-><init>(Ljava/io/Reader;I)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 240
    :try_start_1
    invoke-virtual {v3}, Ljava/io/BufferedReader;->readLine()Ljava/lang/String;

    move-result-object p0

    .line 241
    invoke-virtual {v3}, Ljava/io/BufferedReader;->close()V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    new-array v1, v1, [Ljava/io/Closeable;

    aput-object v3, v1, v0

    .line 245
    invoke-static {v1}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->safeClose([Ljava/io/Closeable;)V

    return-object p0

    :catchall_0
    move-object v3, v2

    :catchall_1
    new-array p0, v1, [Ljava/io/Closeable;

    aput-object v3, p0, v0

    invoke-static {p0}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->safeClose([Ljava/io/Closeable;)V

    return-object v2
.end method

.method public static df()Z
    .locals 1

    const-string v0, "MIUI"

    .line 75
    invoke-static {v0}, Lcom/ss/android/socialbase/appdownloader/c/pt;->rg(Ljava/lang/String;)Z

    move-result v0

    return v0
.end method

.method public static f()Z
    .locals 2

    .line 319
    invoke-static {}, Lcom/ss/android/socialbase/appdownloader/c/pt;->un()V

    .line 320
    sget-object v0, Lcom/ss/android/socialbase/appdownloader/c/pt;->fw:Ljava/lang/String;

    const-string v1, "V12"

    invoke-virtual {v1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    return v0
.end method

.method public static fw()Ljava/lang/String;
    .locals 1

    .line 137
    sget-object v0, Lcom/ss/android/socialbase/appdownloader/c/pt;->pp:Ljava/lang/String;

    if-nez v0, :cond_0

    const-string v0, ""

    .line 138
    invoke-static {v0}, Lcom/ss/android/socialbase/appdownloader/c/pt;->rg(Ljava/lang/String;)Z

    .line 140
    :cond_0
    sget-object v0, Lcom/ss/android/socialbase/appdownloader/c/pt;->pp:Ljava/lang/String;

    return-object v0
.end method

.method public static hq()Z
    .locals 2

    .line 309
    invoke-static {}, Lcom/ss/android/socialbase/appdownloader/c/pt;->un()V

    .line 310
    sget-object v0, Lcom/ss/android/socialbase/appdownloader/c/pt;->fw:Ljava/lang/String;

    const-string v1, "V10"

    invoke-virtual {v1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    return v0
.end method

.method public static oh()Z
    .locals 2

    .line 314
    invoke-static {}, Lcom/ss/android/socialbase/appdownloader/c/pt;->un()V

    .line 315
    sget-object v0, Lcom/ss/android/socialbase/appdownloader/c/pt;->fw:Ljava/lang/String;

    const-string v1, "V11"

    invoke-virtual {v1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    return v0
.end method

.method public static pp()Z
    .locals 1

    const-string v0, "FLYME"

    .line 91
    invoke-static {v0}, Lcom/ss/android/socialbase/appdownloader/c/pt;->rg(Ljava/lang/String;)Z

    move-result v0

    return v0
.end method

.method public static pt(Ljava/lang/String;)Ljava/lang/String;
    .locals 3

    .line 266
    invoke-static {}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->getGlobalSettings()Lorg/json/JSONObject;

    move-result-object v0

    const-string v1, "enable_reflect_system_properties"

    const/4 v2, 0x1

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->optBoolean(Ljava/lang/String;Z)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 269
    :try_start_0
    invoke-static {p0}, Lcom/ss/android/socialbase/appdownloader/c/pt;->q(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    .line 271
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    .line 272
    invoke-static {p0}, Lcom/ss/android/socialbase/appdownloader/c/pt;->df(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    goto :goto_0

    .line 275
    :cond_0
    invoke-static {p0}, Lcom/ss/android/socialbase/appdownloader/c/pt;->df(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    :goto_0
    return-object p0
.end method

.method public static pt()Z
    .locals 1

    .line 85
    invoke-static {}, Lcom/ss/android/socialbase/appdownloader/c/pt;->v()V

    .line 86
    sget-object v0, Lcom/ss/android/socialbase/appdownloader/c/pt;->rg:Ljava/lang/String;

    invoke-static {v0}, Lcom/ss/android/socialbase/appdownloader/c/pt;->rg(Ljava/lang/String;)Z

    move-result v0

    return v0
.end method

.method public static q(Ljava/lang/String;)Ljava/lang/String;
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/lang/Throwable;
        }
    .end annotation

    const-string v0, "android.os.SystemProperties"

    .line 252
    invoke-static {v0}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v0

    const/4 v1, 0x1

    new-array v2, v1, [Ljava/lang/Class;

    const-class v3, Ljava/lang/String;

    const/4 v4, 0x0

    aput-object v3, v2, v4

    const-string v3, "get"

    invoke-virtual {v0, v3, v2}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v0

    new-array v1, v1, [Ljava/lang/Object;

    aput-object p0, v1, v4

    const/4 p0, 0x0

    .line 253
    invoke-virtual {v0, p0, v1}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Ljava/lang/String;

    return-object p0
.end method

.method public static q()Z
    .locals 1

    const-string v0, "VIVO"

    .line 80
    invoke-static {v0}, Lcom/ss/android/socialbase/appdownloader/c/pt;->rg(Ljava/lang/String;)Z

    move-result v0

    return v0
.end method

.method public static rg()Z
    .locals 1

    const-string v0, "EMUI"

    .line 70
    invoke-static {v0}, Lcom/ss/android/socialbase/appdownloader/c/pt;->rg(Ljava/lang/String;)Z

    move-result v0

    return v0
.end method

.method public static rg(Ljava/lang/String;)Z
    .locals 4

    .line 171
    invoke-static {}, Lcom/ss/android/socialbase/appdownloader/c/pt;->v()V

    .line 172
    sget-object v0, Lcom/ss/android/socialbase/appdownloader/c/pt;->pp:Ljava/lang/String;

    if-eqz v0, :cond_0

    .line 173
    invoke-virtual {v0, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    return p0

    :cond_0
    const-string v0, "ro.miui.ui.version.name"

    .line 175
    invoke-static {v0}, Lcom/ss/android/socialbase/appdownloader/c/pt;->pt(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/ss/android/socialbase/appdownloader/c/pt;->c:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    const-string v0, "MIUI"

    .line 176
    sput-object v0, Lcom/ss/android/socialbase/appdownloader/c/pt;->pp:Ljava/lang/String;

    const-string v0, "com.xiaomi.market"

    .line 177
    sput-object v0, Lcom/ss/android/socialbase/appdownloader/c/pt;->q:Ljava/lang/String;

    .line 178
    sget-object v0, Lcom/ss/android/socialbase/appdownloader/c/pt;->c:Ljava/lang/String;

    sput-object v0, Lcom/ss/android/socialbase/appdownloader/c/pt;->fw:Ljava/lang/String;

    goto/16 :goto_0

    :cond_1
    const-string v0, "ro.build.version.emui"

    .line 179
    invoke-static {v0}, Lcom/ss/android/socialbase/appdownloader/c/pt;->pt(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/ss/android/socialbase/appdownloader/c/pt;->c:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_2

    const-string v0, "EMUI"

    .line 180
    sput-object v0, Lcom/ss/android/socialbase/appdownloader/c/pt;->pp:Ljava/lang/String;

    const-string v0, "com.huawei.appmarket"

    .line 181
    sput-object v0, Lcom/ss/android/socialbase/appdownloader/c/pt;->q:Ljava/lang/String;

    goto/16 :goto_0

    .line 182
    :cond_2
    sget-object v0, Lcom/ss/android/socialbase/appdownloader/c/pt;->pt:Ljava/lang/String;

    invoke-static {v0}, Lcom/ss/android/socialbase/appdownloader/c/pt;->pt(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/ss/android/socialbase/appdownloader/c/pt;->c:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const-string v1, "com.heytap.market"

    const/4 v2, -0x1

    if-nez v0, :cond_4

    .line 183
    sget-object v0, Lcom/ss/android/socialbase/appdownloader/c/pt;->rg:Ljava/lang/String;

    sput-object v0, Lcom/ss/android/socialbase/appdownloader/c/pt;->pp:Ljava/lang/String;

    .line 184
    sget-object v0, Lcom/ss/android/socialbase/appdownloader/c/pt;->df:Ljava/lang/String;

    invoke-static {v0}, Lcom/ss/android/socialbase/appdownloader/fw;->rg(Ljava/lang/String;)I

    move-result v0

    if-le v0, v2, :cond_3

    .line 186
    sget-object v0, Lcom/ss/android/socialbase/appdownloader/c/pt;->df:Ljava/lang/String;

    sput-object v0, Lcom/ss/android/socialbase/appdownloader/c/pt;->q:Ljava/lang/String;

    goto/16 :goto_0

    .line 188
    :cond_3
    sput-object v1, Lcom/ss/android/socialbase/appdownloader/c/pt;->q:Ljava/lang/String;

    goto/16 :goto_0

    :cond_4
    const-string v0, "ro.vivo.os.version"

    .line 190
    invoke-static {v0}, Lcom/ss/android/socialbase/appdownloader/c/pt;->pt(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/ss/android/socialbase/appdownloader/c/pt;->c:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_5

    const-string v0, "VIVO"

    .line 191
    sput-object v0, Lcom/ss/android/socialbase/appdownloader/c/pt;->pp:Ljava/lang/String;

    const-string v0, "com.bbk.appstore"

    .line 192
    sput-object v0, Lcom/ss/android/socialbase/appdownloader/c/pt;->q:Ljava/lang/String;

    goto/16 :goto_0

    :cond_5
    const-string v0, "ro.smartisan.version"

    .line 193
    invoke-static {v0}, Lcom/ss/android/socialbase/appdownloader/c/pt;->pt(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/ss/android/socialbase/appdownloader/c/pt;->c:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_6

    const-string v0, "SMARTISAN"

    .line 194
    sput-object v0, Lcom/ss/android/socialbase/appdownloader/c/pt;->pp:Ljava/lang/String;

    const-string v0, "com.smartisanos.appstore"

    .line 195
    sput-object v0, Lcom/ss/android/socialbase/appdownloader/c/pt;->q:Ljava/lang/String;

    goto/16 :goto_0

    :cond_6
    const-string v0, "ro.gn.sv.version"

    .line 196
    invoke-static {v0}, Lcom/ss/android/socialbase/appdownloader/c/pt;->pt(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/ss/android/socialbase/appdownloader/c/pt;->c:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_7

    const-string v0, "QIONEE"

    .line 197
    sput-object v0, Lcom/ss/android/socialbase/appdownloader/c/pt;->pp:Ljava/lang/String;

    const-string v0, "com.gionee.aora.market"

    .line 198
    sput-object v0, Lcom/ss/android/socialbase/appdownloader/c/pt;->q:Ljava/lang/String;

    goto/16 :goto_0

    :cond_7
    const-string v0, "ro.lenovo.lvp.version"

    .line 199
    invoke-static {v0}, Lcom/ss/android/socialbase/appdownloader/c/pt;->pt(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/ss/android/socialbase/appdownloader/c/pt;->c:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_8

    const-string v0, "LENOVO"

    .line 200
    sput-object v0, Lcom/ss/android/socialbase/appdownloader/c/pt;->pp:Ljava/lang/String;

    const-string v0, "com.lenovo.leos.appstore"

    .line 201
    sput-object v0, Lcom/ss/android/socialbase/appdownloader/c/pt;->q:Ljava/lang/String;

    goto/16 :goto_0

    .line 202
    :cond_8
    invoke-static {}, Lcom/ss/android/socialbase/appdownloader/c/pt;->bm()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/String;->toUpperCase()Ljava/lang/String;

    move-result-object v0

    const-string v3, "SAMSUNG"

    invoke-virtual {v0, v3}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_9

    .line 203
    sput-object v3, Lcom/ss/android/socialbase/appdownloader/c/pt;->pp:Ljava/lang/String;

    const-string v0, "com.sec.android.app.samsungapps"

    .line 204
    sput-object v0, Lcom/ss/android/socialbase/appdownloader/c/pt;->q:Ljava/lang/String;

    goto/16 :goto_0

    .line 205
    :cond_9
    invoke-static {}, Lcom/ss/android/socialbase/appdownloader/c/pt;->bm()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/String;->toUpperCase()Ljava/lang/String;

    move-result-object v0

    const-string v3, "ZTE"

    invoke-virtual {v0, v3}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_a

    .line 207
    sput-object v3, Lcom/ss/android/socialbase/appdownloader/c/pt;->pp:Ljava/lang/String;

    const-string v0, "zte.com.market"

    .line 208
    sput-object v0, Lcom/ss/android/socialbase/appdownloader/c/pt;->q:Ljava/lang/String;

    goto :goto_0

    .line 209
    :cond_a
    invoke-static {}, Lcom/ss/android/socialbase/appdownloader/c/pt;->bm()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/String;->toUpperCase()Ljava/lang/String;

    move-result-object v0

    const-string v3, "NUBIA"

    invoke-virtual {v0, v3}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_b

    .line 210
    sput-object v3, Lcom/ss/android/socialbase/appdownloader/c/pt;->pp:Ljava/lang/String;

    const-string v0, "cn.nubia.neostore"

    .line 211
    sput-object v0, Lcom/ss/android/socialbase/appdownloader/c/pt;->q:Ljava/lang/String;

    goto :goto_0

    .line 212
    :cond_b
    invoke-static {}, Lcom/ss/android/socialbase/appdownloader/c/pt;->b()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/String;->toUpperCase()Ljava/lang/String;

    move-result-object v0

    const-string v3, "FLYME"

    invoke-virtual {v0, v3}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_c

    .line 213
    sput-object v3, Lcom/ss/android/socialbase/appdownloader/c/pt;->pp:Ljava/lang/String;

    const-string v0, "com.meizu.mstore"

    .line 214
    sput-object v0, Lcom/ss/android/socialbase/appdownloader/c/pt;->q:Ljava/lang/String;

    .line 215
    invoke-static {}, Lcom/ss/android/socialbase/appdownloader/c/pt;->b()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/ss/android/socialbase/appdownloader/c/pt;->c:Ljava/lang/String;

    goto :goto_0

    .line 216
    :cond_c
    invoke-static {}, Lcom/ss/android/socialbase/appdownloader/c/pt;->bm()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/String;->toUpperCase()Ljava/lang/String;

    move-result-object v0

    const-string v3, "ONEPLUS"

    invoke-virtual {v0, v3}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_e

    .line 217
    sput-object v3, Lcom/ss/android/socialbase/appdownloader/c/pt;->pp:Ljava/lang/String;

    const-string v0, "ro.rom.version"

    .line 218
    invoke-static {v0}, Lcom/ss/android/socialbase/appdownloader/c/pt;->pt(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/ss/android/socialbase/appdownloader/c/pt;->c:Ljava/lang/String;

    .line 220
    sget-object v0, Lcom/ss/android/socialbase/appdownloader/c/pt;->df:Ljava/lang/String;

    invoke-static {v0}, Lcom/ss/android/socialbase/appdownloader/fw;->rg(Ljava/lang/String;)I

    move-result v0

    if-le v0, v2, :cond_d

    .line 222
    sget-object v0, Lcom/ss/android/socialbase/appdownloader/c/pt;->df:Ljava/lang/String;

    sput-object v0, Lcom/ss/android/socialbase/appdownloader/c/pt;->q:Ljava/lang/String;

    goto :goto_0

    .line 224
    :cond_d
    sput-object v1, Lcom/ss/android/socialbase/appdownloader/c/pt;->q:Ljava/lang/String;

    goto :goto_0

    .line 227
    :cond_e
    invoke-static {}, Lcom/ss/android/socialbase/appdownloader/c/pt;->bm()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/String;->toUpperCase()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/ss/android/socialbase/appdownloader/c/pt;->pp:Ljava/lang/String;

    const-string v0, ""

    .line 228
    sput-object v0, Lcom/ss/android/socialbase/appdownloader/c/pt;->q:Ljava/lang/String;

    .line 229
    sput-object v0, Lcom/ss/android/socialbase/appdownloader/c/pt;->c:Ljava/lang/String;

    .line 231
    :goto_0
    sget-object v0, Lcom/ss/android/socialbase/appdownloader/c/pt;->pp:Ljava/lang/String;

    invoke-virtual {v0, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    return p0
.end method

.method public static rz()Ljava/lang/String;
    .locals 1

    .line 155
    sget-object v0, Lcom/ss/android/socialbase/appdownloader/c/pt;->q:Ljava/lang/String;

    if-nez v0, :cond_0

    const-string v0, ""

    .line 156
    invoke-static {v0}, Lcom/ss/android/socialbase/appdownloader/c/pt;->rg(Ljava/lang/String;)Z

    .line 158
    :cond_0
    sget-object v0, Lcom/ss/android/socialbase/appdownloader/c/pt;->q:Ljava/lang/String;

    return-object v0
.end method

.method private static un()V
    .locals 1

    .line 324
    sget-object v0, Lcom/ss/android/socialbase/appdownloader/c/pt;->fw:Ljava/lang/String;

    if-nez v0, :cond_1

    :try_start_0
    const-string v0, "ro.miui.ui.version.name"

    .line 326
    invoke-static {v0}, Lcom/ss/android/socialbase/appdownloader/c/pt;->pt(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/ss/android/socialbase/appdownloader/c/pt;->fw:Ljava/lang/String;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 328
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 330
    :goto_0
    sget-object v0, Lcom/ss/android/socialbase/appdownloader/c/pt;->fw:Ljava/lang/String;

    if-nez v0, :cond_0

    const-string v0, ""

    :cond_0
    sput-object v0, Lcom/ss/android/socialbase/appdownloader/c/pt;->fw:Ljava/lang/String;

    :cond_1
    return-void
.end method

.method public static ux()Ljava/lang/String;
    .locals 1

    .line 146
    sget-object v0, Lcom/ss/android/socialbase/appdownloader/c/pt;->c:Ljava/lang/String;

    if-nez v0, :cond_0

    const-string v0, ""

    .line 147
    invoke-static {v0}, Lcom/ss/android/socialbase/appdownloader/c/pt;->rg(Ljava/lang/String;)Z

    .line 149
    :cond_0
    sget-object v0, Lcom/ss/android/socialbase/appdownloader/c/pt;->c:Ljava/lang/String;

    return-object v0
.end method

.method private static v()V
    .locals 2

    .line 162
    sget-object v0, Lcom/ss/android/socialbase/appdownloader/c/pt;->rg:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 163
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->ensureOPPO()V

    .line 164
    sget-object v0, Lcom/ss/android/socialbase/downloader/constants/DownloadConstants;->UPPER_OPPO:Ljava/lang/String;

    sput-object v0, Lcom/ss/android/socialbase/appdownloader/c/pt;->rg:Ljava/lang/String;

    .line 165
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "ro.build.version."

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v1, Lcom/ss/android/socialbase/downloader/constants/DownloadConstants;->LOWER_OPPO:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "rom"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/ss/android/socialbase/appdownloader/c/pt;->pt:Ljava/lang/String;

    .line 166
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "com."

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v1, Lcom/ss/android/socialbase/downloader/constants/DownloadConstants;->LOWER_OPPO:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, ".market"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/ss/android/socialbase/appdownloader/c/pt;->df:Ljava/lang/String;

    :cond_0
    return-void
.end method
