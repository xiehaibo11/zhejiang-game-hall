.class public Lcom/mbridge/msdk/foundation/tools/e;
.super Ljava/lang/Object;
.source "DomainSameDiTool.java"


# static fields
.field private static a:Ljava/lang/String; = ""

.field private static b:Ljava/lang/String; = ""

.field private static c:I = -0x1

.field private static d:Ljava/lang/String; = ""

.field private static e:Ljava/lang/String; = ""

.field private static f:Ljava/lang/String; = ""

.field private static g:Lorg/json/JSONObject; = null

.field private static h:Ljava/lang/String; = ""

.field private static i:Ljava/lang/String; = ""

.field private static j:Ljava/lang/String; = ""

.field private static k:Ljava/lang/String; = ""

.field private static l:Ljava/lang/String; = ""

.field private static m:Ljava/lang/String;

.field private static n:Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public static a()I
    .locals 1

    const/4 v0, 0x0

    return v0
.end method

.method public static a(Landroid/content/Context;)Ljava/lang/String;
    .locals 2

    .line 99
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a()Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;

    move-result-object v0

    const-string v1, "authority_device_id"

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a(Ljava/lang/String;)Z

    move-result v0

    const-string v1, ""

    if-nez v0, :cond_0

    return-object v1

    .line 102
    :cond_0
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->h()Z

    move-result v0

    if-nez v0, :cond_1

    .line 103
    sget-object p0, Lcom/mbridge/msdk/foundation/tools/e;->a:Ljava/lang/String;

    return-object p0

    :cond_1
    if-nez p0, :cond_2

    return-object v1

    .line 108
    :cond_2
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/e;->a:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_3

    .line 109
    sget-object p0, Lcom/mbridge/msdk/foundation/tools/e;->a:Ljava/lang/String;

    return-object p0

    .line 112
    :cond_3
    :try_start_0
    invoke-static {p0}, Lcom/mbridge/msdk/optimize/SensitiveDataUtil;->getOaid(Landroid/content/Context;)Ljava/lang/String;

    move-result-object p0

    sput-object p0, Lcom/mbridge/msdk/foundation/tools/e;->a:Ljava/lang/String;

    .line 113
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p0

    if-nez p0, :cond_4

    .line 114
    sget-object p0, Lcom/mbridge/msdk/foundation/tools/e;->a:Ljava/lang/String;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object p0

    :catchall_0
    move-exception p0

    .line 117
    invoke-virtual {p0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    const-string v1, "DomainSameDiTool"

    invoke-static {v1, v0, p0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    .line 119
    :cond_4
    sget-object p0, Lcom/mbridge/msdk/foundation/tools/e;->a:Ljava/lang/String;

    return-object p0
.end method

.method public static a(Ljava/lang/String;)V
    .locals 0

    .line 878
    sput-object p0, Lcom/mbridge/msdk/foundation/tools/e;->k:Ljava/lang/String;

    return-void
.end method

.method public static b()Ljava/lang/String;
    .locals 2

    .line 490
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a()Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;

    move-result-object v0

    const-string v1, "authority_general_data"

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_0

    const-string v0, ""

    return-object v0

    .line 493
    :cond_0
    sget-object v0, Landroid/os/Build;->CPU_ABI2:Ljava/lang/String;

    return-object v0
.end method

.method public static b(Landroid/content/Context;)Ljava/lang/String;
    .locals 3

    .line 128
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a()Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;

    move-result-object v0

    const-string v1, "authority_imei_mac"

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a(Ljava/lang/String;)Z

    move-result v0

    const-string v1, ""

    if-nez v0, :cond_0

    return-object v1

    .line 131
    :cond_0
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->h()Z

    move-result v0

    if-nez v0, :cond_1

    .line 132
    sget-object p0, Lcom/mbridge/msdk/foundation/tools/e;->k:Ljava/lang/String;

    return-object p0

    :cond_1
    if-nez p0, :cond_2

    return-object v1

    .line 138
    :cond_2
    :try_start_0
    invoke-static {p0}, Lcom/mbridge/msdk/optimize/SensitiveDataUtil;->getIMEI(Landroid/content/Context;)Ljava/lang/String;

    move-result-object p0

    sput-object p0, Lcom/mbridge/msdk/foundation/tools/e;->k:Ljava/lang/String;

    .line 139
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p0

    if-nez p0, :cond_3

    .line 140
    sget-object p0, Lcom/mbridge/msdk/foundation/tools/e;->k:Ljava/lang/String;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object p0

    :catchall_0
    move-exception p0

    .line 143
    invoke-virtual {p0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    const-string v2, "DomainSameDiTool"

    invoke-static {v2, v0, p0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :cond_3
    return-object v1
.end method

.method public static b(Ljava/lang/String;)V
    .locals 0

    .line 882
    sput-object p0, Lcom/mbridge/msdk/foundation/tools/e;->l:Ljava/lang/String;

    return-void
.end method

.method public static c()Ljava/lang/String;
    .locals 2

    .line 501
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a()Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;

    move-result-object v0

    const-string v1, "authority_general_data"

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_0

    const-string v0, ""

    return-object v0

    .line 504
    :cond_0
    sget-object v0, Landroid/os/Build;->CPU_ABI:Ljava/lang/String;

    return-object v0
.end method

.method public static c(Landroid/content/Context;)Ljava/lang/String;
    .locals 3

    .line 153
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a()Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;

    move-result-object v0

    const-string v1, "authority_imei_mac"

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a(Ljava/lang/String;)Z

    move-result v0

    const-string v1, ""

    if-nez v0, :cond_0

    return-object v1

    .line 156
    :cond_0
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->h()Z

    move-result v0

    if-nez v0, :cond_1

    .line 157
    sget-object p0, Lcom/mbridge/msdk/foundation/tools/e;->l:Ljava/lang/String;

    return-object p0

    :cond_1
    if-nez p0, :cond_2

    return-object v1

    .line 163
    :cond_2
    :try_start_0
    invoke-static {p0}, Lcom/mbridge/msdk/optimize/SensitiveDataUtil;->getImsi(Landroid/content/Context;)Ljava/lang/String;

    move-result-object p0

    sput-object p0, Lcom/mbridge/msdk/foundation/tools/e;->l:Ljava/lang/String;

    .line 164
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p0

    if-nez p0, :cond_3

    .line 165
    sget-object p0, Lcom/mbridge/msdk/foundation/tools/e;->l:Ljava/lang/String;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object p0

    :catchall_0
    move-exception p0

    .line 168
    invoke-virtual {p0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    const-string v2, "DomainSameDiTool"

    invoke-static {v2, v0, p0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :cond_3
    return-object v1
.end method

.method public static c(Ljava/lang/String;)V
    .locals 0

    .line 886
    sput-object p0, Lcom/mbridge/msdk/foundation/tools/e;->e:Ljava/lang/String;

    return-void
.end method

.method public static d()Ljava/lang/String;
    .locals 2

    .line 511
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a()Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;

    move-result-object v0

    const-string v1, "authority_general_data"

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_0

    const-string v0, ""

    return-object v0

    .line 514
    :cond_0
    sget-object v0, Landroid/os/Build;->TAGS:Ljava/lang/String;

    return-object v0
.end method

.method public static d(Landroid/content/Context;)Ljava/lang/String;
    .locals 0

    .line 193
    sget-object p0, Lcom/mbridge/msdk/foundation/tools/e;->i:Ljava/lang/String;

    return-object p0
.end method

.method public static d(Ljava/lang/String;)V
    .locals 0

    .line 890
    sput-object p0, Lcom/mbridge/msdk/foundation/tools/e;->a:Ljava/lang/String;

    return-void
.end method

.method public static e()Ljava/lang/String;
    .locals 2

    .line 521
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a()Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;

    move-result-object v0

    const-string v1, "authority_general_data"

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_0

    const-string v0, ""

    return-object v0

    .line 524
    :cond_0
    sget-object v0, Landroid/os/Build;->USER:Ljava/lang/String;

    return-object v0
.end method

.method public static e(Landroid/content/Context;)Ljava/lang/String;
    .locals 0

    .line 200
    sget-object p0, Lcom/mbridge/msdk/foundation/tools/e;->j:Ljava/lang/String;

    return-object p0
.end method

.method public static e(Ljava/lang/String;)V
    .locals 0

    .line 894
    sput-object p0, Lcom/mbridge/msdk/foundation/tools/e;->d:Ljava/lang/String;

    return-void
.end method

.method public static f()Ljava/lang/String;
    .locals 2

    .line 531
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a()Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;

    move-result-object v0

    const-string v1, "authority_general_data"

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_0

    const-string v0, ""

    return-object v0

    .line 534
    :cond_0
    sget-object v0, Landroid/os/Build;->RADIO:Ljava/lang/String;

    return-object v0
.end method

.method public static f(Landroid/content/Context;)Ljava/lang/String;
    .locals 2

    if-nez p0, :cond_0

    .line 225
    sget-object p0, Lcom/mbridge/msdk/foundation/tools/e;->d:Ljava/lang/String;

    return-object p0

    .line 228
    :cond_0
    :try_start_0
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/e;->d:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 229
    invoke-static {p0}, Lcom/mbridge/msdk/optimize/SensitiveDataUtil;->getAndroidID(Landroid/content/Context;)Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Lcom/mbridge/msdk/foundation/tools/t;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    sput-object p0, Lcom/mbridge/msdk/foundation/tools/e;->d:Ljava/lang/String;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p0

    .line 232
    invoke-virtual {p0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    const-string v1, "DomainSameDiTool"

    invoke-static {v1, v0, p0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    .line 234
    :cond_1
    :goto_0
    sget-object p0, Lcom/mbridge/msdk/foundation/tools/e;->d:Ljava/lang/String;

    return-object p0
.end method

.method private static f(Ljava/lang/String;)Ljava/lang/String;
    .locals 7

    const/4 v0, 0x0

    .line 940
    :try_start_0
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v1

    if-nez v1, :cond_0

    return-object v0

    .line 944
    :cond_0
    invoke-virtual {v1}, Landroid/content/Context;->getClassLoader()Ljava/lang/ClassLoader;

    move-result-object v1

    const-string v2, "android.os.SystemProperties"

    .line 945
    invoke-virtual {v1, v2}, Ljava/lang/ClassLoader;->loadClass(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v1

    const-string v2, "get"

    const/4 v3, 0x1

    new-array v4, v3, [Ljava/lang/Class;

    .line 946
    const-class v5, Ljava/lang/String;

    const/4 v6, 0x0

    aput-object v5, v4, v6

    invoke-virtual {v1, v2, v4}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v2

    new-array v3, v3, [Ljava/lang/Object;

    aput-object p0, v3, v6

    .line 949
    invoke-virtual {v2, v1, v3}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Ljava/lang/String;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object p0

    :catch_0
    move-exception p0

    .line 951
    invoke-virtual {p0}, Ljava/lang/Exception;->toString()Ljava/lang/String;

    move-result-object p0

    const-string v1, "DomainSameDiTool"

    invoke-static {v1, p0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    return-object v0
.end method

.method public static g()Ljava/lang/String;
    .locals 2

    .line 542
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a()Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;

    move-result-object v0

    const-string v1, "authority_general_data"

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_0

    const-string v0, ""

    return-object v0

    .line 545
    :cond_0
    sget-object v0, Landroid/os/Build;->BOOTLOADER:Ljava/lang/String;

    return-object v0
.end method

.method public static g(Landroid/content/Context;)Ljava/lang/String;
    .locals 2

    .line 245
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a()Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;

    move-result-object v0

    const-string v1, "authority_android_id"

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_0

    const-string p0, ""

    return-object p0

    .line 248
    :cond_0
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->h()Z

    move-result v0

    if-nez v0, :cond_1

    .line 249
    sget-object p0, Lcom/mbridge/msdk/foundation/tools/e;->d:Ljava/lang/String;

    return-object p0

    :cond_1
    if-nez p0, :cond_2

    .line 252
    sget-object p0, Lcom/mbridge/msdk/foundation/tools/e;->m:Ljava/lang/String;

    return-object p0

    .line 255
    :cond_2
    :try_start_0
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/e;->m:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_3

    .line 256
    invoke-static {p0}, Lcom/mbridge/msdk/optimize/SensitiveDataUtil;->getAndroidID(Landroid/content/Context;)Ljava/lang/String;

    move-result-object p0

    sput-object p0, Lcom/mbridge/msdk/foundation/tools/e;->m:Ljava/lang/String;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p0

    .line 259
    invoke-virtual {p0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    const-string v1, "DomainSameDiTool"

    invoke-static {v1, v0, p0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    .line 262
    :cond_3
    :goto_0
    sget-object p0, Lcom/mbridge/msdk/foundation/tools/e;->m:Ljava/lang/String;

    return-object p0
.end method

.method public static h()Ljava/lang/String;
    .locals 2

    .line 553
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a()Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;

    move-result-object v0

    const-string v1, "authority_general_data"

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_0

    const-string v0, ""

    return-object v0

    .line 556
    :cond_0
    sget-object v0, Landroid/os/Build;->HARDWARE:Ljava/lang/String;

    return-object v0
.end method

.method public static h(Landroid/content/Context;)Ljava/lang/String;
    .locals 2

    if-nez p0, :cond_0

    const-string p0, ""

    return-object p0

    :cond_0
    const/4 v0, 0x0

    .line 271
    sput-object v0, Lcom/mbridge/msdk/foundation/tools/e;->n:Ljava/lang/String;

    .line 273
    :try_start_0
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 274
    invoke-static {p0}, Lcom/mbridge/msdk/foundation/tools/e;->g(Landroid/content/Context;)Ljava/lang/String;

    move-result-object p0

    sput-object p0, Lcom/mbridge/msdk/foundation/tools/e;->n:Ljava/lang/String;

    .line 275
    invoke-static {p0}, Lcom/mbridge/msdk/foundation/tools/SameMD5;->getUPMD5(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    sput-object p0, Lcom/mbridge/msdk/foundation/tools/e;->n:Ljava/lang/String;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p0

    .line 278
    invoke-virtual {p0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    const-string v1, "DomainSameDiTool"

    invoke-static {v1, v0, p0}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    .line 280
    :cond_1
    :goto_0
    sget-object p0, Lcom/mbridge/msdk/foundation/tools/e;->n:Ljava/lang/String;

    return-object p0
.end method

.method public static i()Ljava/lang/String;
    .locals 2

    .line 564
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a()Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;

    move-result-object v0

    const-string v1, "authority_general_data"

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_0

    const-string v0, ""

    return-object v0

    .line 567
    :cond_0
    sget-object v0, Landroid/os/Build;->HOST:Ljava/lang/String;

    return-object v0
.end method

.method public static i(Landroid/content/Context;)Ljava/lang/String;
    .locals 2

    .line 306
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a()Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;

    move-result-object v0

    const-string v1, "authority_imei_mac"

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_0

    const-string p0, ""

    return-object p0

    .line 309
    :cond_0
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->h()Z

    move-result v0

    if-nez v0, :cond_1

    .line 310
    sget-object p0, Lcom/mbridge/msdk/foundation/tools/e;->e:Ljava/lang/String;

    return-object p0

    :cond_1
    if-nez p0, :cond_2

    .line 313
    sget-object p0, Lcom/mbridge/msdk/foundation/tools/e;->e:Ljava/lang/String;

    return-object p0

    .line 316
    :cond_2
    :try_start_0
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/e;->e:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_3

    .line 317
    invoke-static {p0}, Lcom/mbridge/msdk/optimize/SensitiveDataUtil;->getMacAddress(Landroid/content/Context;)Ljava/lang/String;

    move-result-object p0

    sput-object p0, Lcom/mbridge/msdk/foundation/tools/e;->e:Ljava/lang/String;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p0

    .line 320
    invoke-virtual {p0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    const-string v1, "DomainSameDiTool"

    invoke-static {v1, v0, p0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    .line 322
    :cond_3
    :goto_0
    sget-object p0, Lcom/mbridge/msdk/foundation/tools/e;->e:Ljava/lang/String;

    return-object p0
.end method

.method public static j()Ljava/lang/String;
    .locals 2

    .line 574
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a()Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;

    move-result-object v0

    const-string v1, "authority_general_data"

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_0

    const-string v0, ""

    return-object v0

    .line 577
    :cond_0
    sget-object v0, Landroid/os/Build$VERSION;->CODENAME:Ljava/lang/String;

    return-object v0
.end method

.method public static j(Landroid/content/Context;)Ljava/lang/String;
    .locals 3

    const-string v0, ""

    if-nez p0, :cond_0

    return-object v0

    .line 432
    :cond_0
    sget-object v1, Lcom/mbridge/msdk/foundation/tools/e;->f:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_1

    .line 434
    :try_start_0
    invoke-virtual {p0}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object p0

    const-string v1, "com.android.vending"

    const/4 v2, 0x0

    .line 435
    invoke-virtual {p0, v1, v2}, Landroid/content/pm/PackageManager;->getPackageInfo(Ljava/lang/String;I)Landroid/content/pm/PackageInfo;

    move-result-object p0

    .line 436
    iget-object p0, p0, Landroid/content/pm/PackageInfo;->versionName:Ljava/lang/String;

    sput-object p0, Lcom/mbridge/msdk/foundation/tools/e;->f:Ljava/lang/String;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object p0

    :catch_0
    return-object v0

    .line 442
    :cond_1
    sget-object p0, Lcom/mbridge/msdk/foundation/tools/e;->f:Ljava/lang/String;

    return-object p0
.end method

.method public static k(Landroid/content/Context;)I
    .locals 5

    .line 687
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a()Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;

    move-result-object v0

    const-string v1, "authority_general_data"

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a(Ljava/lang/String;)Z

    move-result v0

    const/4 v1, -0x1

    if-nez v0, :cond_0

    return v1

    :cond_0
    if-nez p0, :cond_1

    return v1

    :cond_1
    const/4 v0, 0x0

    const/4 v2, 0x0

    .line 695
    :try_start_0
    new-instance v3, Landroid/content/IntentFilter;

    const-string v4, "android.intent.action.BATTERY_CHANGED"

    invoke-direct {v3, v4}, Landroid/content/IntentFilter;-><init>(Ljava/lang/String;)V

    invoke-virtual {p0, v0, v3}, Landroid/content/Context;->registerReceiver(Landroid/content/BroadcastReceiver;Landroid/content/IntentFilter;)Landroid/content/Intent;

    move-result-object p0

    if-eqz p0, :cond_3

    .line 697
    invoke-virtual {p0}, Landroid/content/Intent;->getExtras()Landroid/os/Bundle;

    move-result-object v0

    if-eqz v0, :cond_3

    const-string v0, "status"

    .line 699
    invoke-virtual {p0, v0, v1}, Landroid/content/Intent;->getIntExtra(Ljava/lang/String;I)I

    move-result p0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    const/4 v0, 0x2

    if-eq p0, v0, :cond_2

    const/4 v0, 0x5

    if-ne p0, v0, :cond_3

    :cond_2
    const/4 v2, 0x1

    goto :goto_0

    :catch_0
    move-exception p0

    .line 705
    invoke-virtual {p0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v0

    const-string v1, "DomainSameDiTool"

    invoke-static {v1, v0, p0}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :cond_3
    :goto_0
    return v2
.end method

.method public static k()Ljava/lang/String;
    .locals 2

    .line 584
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a()Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;

    move-result-object v0

    const-string v1, "authority_general_data"

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_0

    const-string v0, ""

    return-object v0

    .line 587
    :cond_0
    sget-object v0, Landroid/os/Build$VERSION;->INCREMENTAL:Ljava/lang/String;

    return-object v0
.end method

.method public static l()Ljava/lang/String;
    .locals 2

    .line 594
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a()Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;

    move-result-object v0

    const-string v1, "authority_serial_id"

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_0

    const-string v0, ""

    return-object v0

    .line 597
    :cond_0
    sget-object v0, Landroid/os/Build;->SERIAL:Ljava/lang/String;

    return-object v0
.end method

.method public static l(Landroid/content/Context;)Ljava/lang/String;
    .locals 9

    const-string v0, "DomainSameDiTool"

    const-string v1, "com.android.internal.os.PowerProfile"

    .line 716
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a()Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;

    move-result-object v2

    const-string v3, "authority_general_data"

    invoke-virtual {v2, v3}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a(Ljava/lang/String;)Z

    move-result v2

    const-string v3, ""

    if-nez v2, :cond_0

    return-object v3

    :cond_0
    const-wide/16 v4, 0x0

    if-eqz p0, :cond_1

    return-object v3

    .line 726
    :cond_1
    :try_start_0
    invoke-static {v1}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v2

    const/4 v3, 0x1

    new-array v6, v3, [Ljava/lang/Class;

    const-class v7, Landroid/content/Context;

    const/4 v8, 0x0

    aput-object v7, v6, v8

    .line 727
    invoke-virtual {v2, v6}, Ljava/lang/Class;->getConstructor([Ljava/lang/Class;)Ljava/lang/reflect/Constructor;

    move-result-object v2

    new-array v3, v3, [Ljava/lang/Object;

    aput-object p0, v3, v8

    .line 728
    invoke-virtual {v2, v3}, Ljava/lang/reflect/Constructor;->newInstance([Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    .line 730
    invoke-static {v1}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v1

    const-string v2, "getBatteryCapacity"

    new-array v3, v8, [Ljava/lang/Class;

    .line 731
    invoke-virtual {v1, v2, v3}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v1

    new-array v2, v8, [Ljava/lang/Object;

    .line 732
    invoke-virtual {v1, p0, v2}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Ljava/lang/Double;

    .line 729
    invoke-virtual {p0}, Ljava/lang/Double;->doubleValue()D

    move-result-wide v4
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_2

    :catchall_0
    move-exception p0

    goto :goto_0

    :catch_0
    move-exception p0

    goto :goto_1

    .line 736
    :goto_0
    invoke-virtual {p0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1, p0}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    goto :goto_2

    .line 734
    :goto_1
    invoke-virtual {p0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1, p0}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    .line 738
    :goto_2
    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p0, v4, v5}, Ljava/lang/StringBuilder;->append(D)Ljava/lang/StringBuilder;

    const-string v0, " mAh"

    invoke-virtual {p0, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static m(Landroid/content/Context;)I
    .locals 3

    .line 752
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a()Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;

    move-result-object v0

    const-string v1, "authority_general_data"

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a(Ljava/lang/String;)Z

    move-result v0

    const/4 v1, -0x1

    if-nez v0, :cond_0

    return v1

    :cond_0
    if-nez p0, :cond_1

    return v1

    :cond_1
    :try_start_0
    const-string v0, "phone"

    .line 759
    invoke-virtual {p0, v0}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Landroid/telephony/TelephonyManager;

    .line 760
    invoke-virtual {p0}, Landroid/telephony/TelephonyManager;->getSimOperator()Ljava/lang/String;

    move-result-object p0

    const-string v0, "46000"

    .line 761
    invoke-virtual {v0, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_7

    const-string v0, "46002"

    invoke-virtual {v0, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_7

    const-string v0, "46007"

    .line 762
    invoke-virtual {v0, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_7

    const-string v0, "46008"

    invoke-virtual {v0, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_7

    const-string v0, "45412"

    .line 763
    invoke-virtual {v0, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_2

    goto :goto_2

    :cond_2
    const-string v0, "46001"

    .line 765
    invoke-virtual {v0, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_6

    const-string v0, "46006"

    invoke-virtual {v0, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_6

    const-string v0, "46009"

    .line 766
    invoke-virtual {v0, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_3

    goto :goto_1

    :cond_3
    const-string v0, "46003"

    .line 768
    invoke-virtual {v0, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_5

    const-string v0, "46005"

    invoke-virtual {v0, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_5

    const-string v0, "46011"

    .line 769
    invoke-virtual {v0, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_5

    const-string v0, "45502"

    invoke-virtual {v0, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_5

    const-string v0, "45507"

    .line 770
    invoke-virtual {v0, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    if-eqz p0, :cond_4

    goto :goto_0

    :cond_4
    const/4 p0, -0x2

    goto :goto_3

    :cond_5
    :goto_0
    const/4 p0, 0x2

    goto :goto_3

    :cond_6
    :goto_1
    const/4 p0, 0x1

    goto :goto_3

    :cond_7
    :goto_2
    const/4 p0, 0x0

    :goto_3
    move v1, p0

    goto :goto_4

    :catch_0
    move-exception p0

    .line 776
    invoke-virtual {p0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v0

    const-string v2, "DomainSameDiTool"

    invoke-static {v2, v0, p0}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :goto_4
    return v1
.end method

.method public static m()Ljava/lang/String;
    .locals 2

    .line 605
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a()Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;

    move-result-object v0

    const-string v1, "authority_general_data"

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_0

    const-string v0, ""

    return-object v0

    .line 608
    :cond_0
    sget-object v0, Landroid/os/Build;->DISPLAY:Ljava/lang/String;

    return-object v0
.end method

.method public static n(Landroid/content/Context;)I
    .locals 3

    const-string v0, "DomainSameDiTool"

    .line 788
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a()Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;

    move-result-object v1

    const-string v2, "authority_general_data"

    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a(Ljava/lang/String;)Z

    move-result v1

    const/4 v2, -0x1

    if-nez v1, :cond_0

    return v2

    :cond_0
    if-nez p0, :cond_1

    return v2

    :cond_1
    :try_start_0
    const-string v1, "sensor"

    .line 795
    invoke-virtual {p0, v1}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Landroid/hardware/SensorManager;

    .line 796
    invoke-virtual {p0, v2}, Landroid/hardware/SensorManager;->getSensorList(I)Ljava/util/List;

    move-result-object p0

    .line 797
    invoke-interface {p0}, Ljava/util/List;->size()I

    move-result p0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return p0

    :catchall_0
    move-exception p0

    .line 801
    invoke-virtual {p0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1, p0}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    goto :goto_0

    :catch_0
    move-exception p0

    .line 799
    invoke-virtual {p0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1, p0}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :goto_0
    return v2
.end method

.method public static n()Ljava/lang/String;
    .locals 2

    .line 616
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a()Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;

    move-result-object v0

    const-string v1, "authority_general_data"

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_0

    const-string v0, ""

    return-object v0

    .line 619
    :cond_0
    sget-object v0, Landroid/os/Build;->BOARD:Ljava/lang/String;

    return-object v0
.end method

.method public static o()Ljava/lang/String;
    .locals 2

    .line 626
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a()Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;

    move-result-object v0

    const-string v1, "authority_general_data"

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_0

    const-string v0, ""

    return-object v0

    .line 629
    :cond_0
    sget-object v0, Landroid/os/Build;->TYPE:Ljava/lang/String;

    return-object v0
.end method

.method public static o(Landroid/content/Context;)Ljava/lang/String;
    .locals 8

    const-string v0, "DomainSameDiTool"

    .line 812
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a()Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;

    move-result-object v1

    const-string v2, "authority_general_data"

    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a(Ljava/lang/String;)Z

    move-result v1

    const-string v2, ""

    if-nez v1, :cond_0

    return-object v2

    :cond_0
    if-nez p0, :cond_1

    return-object v2

    :cond_1
    :try_start_0
    const-string v1, "input_method"

    .line 819
    invoke-virtual {p0, v1}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Landroid/view/inputmethod/InputMethodManager;

    .line 821
    invoke-virtual {v1}, Landroid/view/inputmethod/InputMethodManager;->getInputMethodList()Ljava/util/List;

    move-result-object v1

    .line 822
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const/4 v4, 0x0

    .line 823
    :goto_0
    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v5

    if-ge v4, v5, :cond_2

    .line 824
    invoke-interface {v1, v4}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Landroid/view/inputmethod/InputMethodInfo;

    invoke-virtual {p0}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v6

    invoke-virtual {v5, v6}, Landroid/view/inputmethod/InputMethodInfo;->loadLabel(Landroid/content/pm/PackageManager;)Ljava/lang/CharSequence;

    move-result-object v5

    .line 825
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "keybroad"

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v5, " "

    invoke-virtual {v6, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    add-int/lit8 v4, v4, 0x1

    goto :goto_0

    .line 827
    :cond_2
    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object p0

    :catchall_0
    move-exception p0

    .line 831
    invoke-virtual {p0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1, p0}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    goto :goto_1

    :catch_0
    move-exception p0

    .line 829
    invoke-virtual {p0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1, p0}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :goto_1
    return-object v2
.end method

.method public static p()Ljava/lang/String;
    .locals 2

    .line 636
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a()Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;

    move-result-object v0

    const-string v1, "authority_general_data"

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_0

    const-string v0, ""

    return-object v0

    .line 639
    :cond_0
    sget-object v0, Landroid/os/Build$VERSION;->RELEASE:Ljava/lang/String;

    return-object v0
.end method

.method protected static p(Landroid/content/Context;)V
    .locals 7

    if-nez p0, :cond_0

    return-void

    :cond_0
    :try_start_0
    const-string v0, "com.mbridge.msdk.mbjscommon.webEnvCheck.WebEnvCheckEntry"

    .line 868
    invoke-static {v0}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v0

    .line 869
    invoke-virtual {v0}, Ljava/lang/Class;->newInstance()Ljava/lang/Object;

    move-result-object v1

    const-string v2, "check"

    const/4 v3, 0x1

    new-array v4, v3, [Ljava/lang/Class;

    .line 870
    const-class v5, Landroid/content/Context;

    const/4 v6, 0x0

    aput-object v5, v4, v6

    invoke-virtual {v0, v2, v4}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v0

    new-array v2, v3, [Ljava/lang/Object;

    aput-object p0, v2, v6

    .line 871
    invoke-virtual {v0, v1, v2}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    .line 873
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public static q()I
    .locals 2

    .line 647
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a()Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;

    move-result-object v0

    const-string v1, "authority_general_data"

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_0

    const/4 v0, -0x1

    return v0

    .line 650
    :cond_0
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    return v0
.end method

.method public static r()I
    .locals 2

    .line 678
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a()Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;

    move-result-object v0

    const-string v1, "authority_general_data"

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_0

    const/4 v0, -0x1

    return v0

    :cond_0
    const/4 v0, 0x1

    return v0
.end method

.method public static s()Ljava/lang/String;
    .locals 3

    .line 849
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/e;->b:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_3

    .line 850
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x15

    if-lt v0, v1, :cond_2

    .line 1838
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a()Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;

    move-result-object v0

    const-string v2, "authority_general_data"

    invoke-virtual {v0, v2}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_1

    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    if-ge v0, v1, :cond_0

    goto :goto_0

    .line 1842
    :cond_0
    sget-object v0, Landroid/os/Build;->SUPPORTED_ABIS:[Ljava/lang/String;

    invoke-static {v0}, Ljava/util/Arrays;->asList([Ljava/lang/Object;)Ljava/util/List;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v0

    goto :goto_1

    :cond_1
    :goto_0
    const-string v0, ""

    .line 851
    :goto_1
    sput-object v0, Lcom/mbridge/msdk/foundation/tools/e;->b:Ljava/lang/String;

    goto :goto_2

    .line 853
    :cond_2
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    .line 854
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/e;->c()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 855
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/e;->b()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 856
    invoke-virtual {v0}, Ljava/util/ArrayList;->toString()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mbridge/msdk/foundation/tools/e;->b:Ljava/lang/String;

    .line 859
    :cond_3
    :goto_2
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/e;->b:Ljava/lang/String;

    return-object v0
.end method

.method public static t()Lorg/json/JSONObject;
    .locals 5

    .line 898
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/e;->g:Lorg/json/JSONObject;

    if-nez v0, :cond_0

    .line 899
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    sput-object v0, Lcom/mbridge/msdk/foundation/tools/e;->g:Lorg/json/JSONObject;

    .line 901
    :cond_0
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/e;->g:Lorg/json/JSONObject;

    invoke-virtual {v0}, Lorg/json/JSONObject;->length()I

    move-result v0

    if-lez v0, :cond_1

    .line 902
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/e;->g:Lorg/json/JSONObject;

    return-object v0

    .line 2197
    :cond_1
    :try_start_0
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/ab$a;->a()Lcom/mbridge/msdk/foundation/tools/ab;

    move-result-object v0

    const-string v1, "e_c"

    const/4 v2, 0x0

    .line 905
    invoke-virtual {v0, v1, v2}, Lcom/mbridge/msdk/foundation/tools/ab;->a(Ljava/lang/String;Z)Z

    move-result v0

    if-eqz v0, :cond_4

    .line 906
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/e;->g:Lorg/json/JSONObject;

    const-string v1, "qemu"

    const-string v3, "ro.kernel.qemu"

    .line 2926
    invoke-static {v3}, Lcom/mbridge/msdk/foundation/tools/e;->f(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    const-string v4, "1"

    .line 2927
    invoke-virtual {v4, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    .line 906
    invoke-virtual {v0, v1, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Z)Lorg/json/JSONObject;

    .line 907
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/e;->g:Lorg/json/JSONObject;

    const-string v1, "abi"

    const-string v3, "ro.product.cpu.abi"

    .line 2932
    invoke-static {v3}, Lcom/mbridge/msdk/foundation/tools/e;->f(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    if-nez v3, :cond_2

    goto :goto_0

    .line 2934
    :cond_2
    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_3

    const-string v4, "x86"

    invoke-virtual {v3, v4}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v3

    if-eqz v3, :cond_3

    const/4 v2, 0x1

    .line 907
    :cond_3
    :goto_0
    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Z)Lorg/json/JSONObject;
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_1

    :catch_0
    move-exception v0

    .line 910
    invoke-virtual {v0}, Lorg/json/JSONException;->printStackTrace()V

    .line 912
    :cond_4
    :goto_1
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/e;->g:Lorg/json/JSONObject;

    return-object v0
.end method

.method public static u()Ljava/lang/String;
    .locals 3

    .line 916
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/e;->h:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 917
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/v;->t()Lorg/json/JSONObject;

    move-result-object v0

    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    .line 918
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "emuStr:"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "DomainSameDiTool"

    invoke-static {v2, v1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 919
    invoke-static {v0}, Lcom/mbridge/msdk/foundation/tools/t;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mbridge/msdk/foundation/tools/e;->h:Ljava/lang/String;

    .line 920
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "_emuBase64String:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v1, Lcom/mbridge/msdk/foundation/tools/e;->h:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v2, v0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 922
    :cond_0
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/e;->h:Ljava/lang/String;

    return-object v0
.end method
