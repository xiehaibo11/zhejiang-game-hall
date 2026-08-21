.class public final Lcom/mbridge/msdk/foundation/tools/aj;
.super Ljava/lang/Object;
.source "TargetAdaptionUtils.java"


# static fields
.field public static a:I = -0x1

.field public static b:Ljava/lang/String; = ""

.field public static c:I = -0x1

.field public static d:Ljava/lang/String; = ""

.field public static e:I = -0x1

.field public static f:I = -0x1

.field public static g:Ljava/lang/String; = ""

.field public static h:Ljava/lang/String; = ""

.field public static i:I = -0x1

.field public static j:Ljava/lang/String; = ""


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public static a(Landroid/content/Context;)Z
    .locals 5

    .line 40
    sget v0, Lcom/mbridge/msdk/foundation/tools/aj;->i:I

    const/4 v1, 0x1

    if-ne v0, v1, :cond_0

    return v1

    :cond_0
    const/4 v2, 0x0

    if-nez v0, :cond_1

    return v2

    :cond_1
    const/4 v0, -0x1

    if-nez p0, :cond_2

    .line 49
    :try_start_0
    sput v0, Lcom/mbridge/msdk/foundation/tools/aj;->i:I

    const-string p0, "content is null"

    .line 50
    sput-object p0, Lcom/mbridge/msdk/foundation/tools/aj;->j:Ljava/lang/String;

    return v2

    .line 53
    :cond_2
    invoke-static {p0}, Lcom/mbridge/msdk/foundation/tools/v;->w(Landroid/content/Context;)I

    move-result v3

    const/16 v4, 0x1a

    if-lt v3, v4, :cond_3

    .line 54
    sget v3, Landroid/os/Build$VERSION;->SDK_INT:I

    if-lt v3, v4, :cond_3

    .line 55
    new-instance v3, Landroid/support/v4/app/NotificationCompat$Builder;

    const-string v4, "download"

    invoke-direct {v3, p0, v4}, Landroid/support/v4/app/NotificationCompat$Builder;-><init>(Landroid/content/Context;Ljava/lang/String;)V

    const-string p0, "ok"

    .line 57
    sput-object p0, Lcom/mbridge/msdk/foundation/tools/aj;->j:Ljava/lang/String;

    .line 58
    sput v1, Lcom/mbridge/msdk/foundation/tools/aj;->i:I
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_1
    .catch Ljava/lang/NoSuchMethodError; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_1

    :catchall_0
    move-exception p0

    .line 70
    invoke-virtual {p0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p0

    sput-object p0, Lcom/mbridge/msdk/foundation/tools/aj;->j:Ljava/lang/String;

    .line 71
    sput v0, Lcom/mbridge/msdk/foundation/tools/aj;->i:I

    goto :goto_0

    :catch_0
    move-exception p0

    .line 66
    invoke-virtual {p0}, Ljava/lang/NoSuchMethodError;->getMessage()Ljava/lang/String;

    move-result-object p0

    sput-object p0, Lcom/mbridge/msdk/foundation/tools/aj;->j:Ljava/lang/String;

    .line 67
    sput v2, Lcom/mbridge/msdk/foundation/tools/aj;->i:I

    goto :goto_0

    :catch_1
    move-exception p0

    .line 62
    invoke-virtual {p0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p0

    sput-object p0, Lcom/mbridge/msdk/foundation/tools/aj;->j:Ljava/lang/String;

    .line 63
    sput v0, Lcom/mbridge/msdk/foundation/tools/aj;->i:I

    :goto_0
    move v1, v2

    :cond_3
    :goto_1
    return v1
.end method

.method public static b(Landroid/content/Context;)Z
    .locals 7

    .line 82
    sget v0, Lcom/mbridge/msdk/foundation/tools/aj;->e:I

    const/4 v1, 0x1

    if-ne v0, v1, :cond_0

    return v1

    :cond_0
    const/4 v2, 0x0

    if-nez v0, :cond_1

    return v2

    :cond_1
    const/4 v0, -0x1

    if-nez p0, :cond_2

    .line 91
    :try_start_0
    sput v0, Lcom/mbridge/msdk/foundation/tools/aj;->e:I

    const-string p0, "context is null"

    .line 92
    sput-object p0, Lcom/mbridge/msdk/foundation/tools/aj;->g:Ljava/lang/String;

    return v2

    .line 95
    :cond_2
    invoke-static {p0}, Lcom/mbridge/msdk/foundation/tools/v;->w(Landroid/content/Context;)I

    move-result v3

    const/16 v4, 0x1a

    if-lt v3, v4, :cond_7

    .line 96
    sget v3, Landroid/os/Build$VERSION;->SDK_INT:I

    if-lt v3, v4, :cond_7

    .line 97
    invoke-virtual {p0}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v3

    invoke-virtual {p0}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object p0

    const/16 v4, 0x1000

    invoke-virtual {v3, p0, v4}, Landroid/content/pm/PackageManager;->getPackageInfo(Ljava/lang/String;I)Landroid/content/pm/PackageInfo;

    move-result-object p0

    iget-object p0, p0, Landroid/content/pm/PackageInfo;->requestedPermissions:[Ljava/lang/String;

    if-nez p0, :cond_3

    .line 99
    sput v0, Lcom/mbridge/msdk/foundation/tools/aj;->e:I

    const-string p0, "permissions is null"

    .line 100
    sput-object p0, Lcom/mbridge/msdk/foundation/tools/aj;->g:Ljava/lang/String;

    return v2

    .line 103
    :cond_3
    array-length v3, p0

    if-nez v3, :cond_4

    .line 104
    sput v2, Lcom/mbridge/msdk/foundation/tools/aj;->e:I

    const-string p0, "permissions is zero"

    .line 105
    sput-object p0, Lcom/mbridge/msdk/foundation/tools/aj;->g:Ljava/lang/String;

    return v2

    .line 108
    :cond_4
    array-length v3, p0

    move v5, v1

    move v4, v2

    :goto_0
    if-ge v4, v3, :cond_6

    aget-object v5, p0, v4

    const-string v6, "android.permission.REQUEST_INSTALL_PACKAGES"

    .line 109
    invoke-virtual {v5, v6}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v5

    if-eqz v5, :cond_5

    .line 111
    sput v1, Lcom/mbridge/msdk/foundation/tools/aj;->e:I

    const-string p0, "ok"

    .line 112
    sput-object p0, Lcom/mbridge/msdk/foundation/tools/aj;->g:Ljava/lang/String;

    goto :goto_1

    :cond_5
    const-string v5, "can\'t find permission"

    .line 116
    sput-object v5, Lcom/mbridge/msdk/foundation/tools/aj;->g:Ljava/lang/String;

    .line 117
    sput v2, Lcom/mbridge/msdk/foundation/tools/aj;->e:I
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    add-int/lit8 v4, v4, 0x1

    move v5, v2

    goto :goto_0

    :cond_6
    move v1, v5

    :cond_7
    :goto_1
    move v2, v1

    goto :goto_2

    :catchall_0
    move-exception p0

    .line 127
    invoke-virtual {p0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p0

    sput-object p0, Lcom/mbridge/msdk/foundation/tools/aj;->g:Ljava/lang/String;

    .line 128
    sput v0, Lcom/mbridge/msdk/foundation/tools/aj;->e:I

    goto :goto_2

    :catch_0
    move-exception p0

    .line 123
    invoke-virtual {p0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p0

    sput-object p0, Lcom/mbridge/msdk/foundation/tools/aj;->g:Ljava/lang/String;

    .line 124
    sput v0, Lcom/mbridge/msdk/foundation/tools/aj;->e:I

    :goto_2
    return v2
.end method

.method public static c(Landroid/content/Context;)Z
    .locals 7

    .line 139
    sget v0, Lcom/mbridge/msdk/foundation/tools/aj;->c:I

    const/4 v1, 0x1

    if-ne v0, v1, :cond_0

    return v1

    :cond_0
    const/4 v2, 0x0

    if-nez v0, :cond_1

    return v2

    :cond_1
    const/4 v0, -0x1

    if-nez p0, :cond_2

    .line 148
    :try_start_0
    sput v0, Lcom/mbridge/msdk/foundation/tools/aj;->c:I

    const-string p0, "context is null"

    .line 149
    sput-object p0, Lcom/mbridge/msdk/foundation/tools/aj;->d:Ljava/lang/String;

    return v2

    .line 152
    :cond_2
    invoke-virtual {p0}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v3

    invoke-virtual {p0}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object p0

    const/4 v4, 0x4

    invoke-virtual {v3, p0, v4}, Landroid/content/pm/PackageManager;->getPackageInfo(Ljava/lang/String;I)Landroid/content/pm/PackageInfo;

    move-result-object p0

    iget-object p0, p0, Landroid/content/pm/PackageInfo;->services:[Landroid/content/pm/ServiceInfo;

    if-nez p0, :cond_3

    .line 154
    sput v0, Lcom/mbridge/msdk/foundation/tools/aj;->c:I

    const-string p0, "serviceinfo is null"

    .line 155
    sput-object p0, Lcom/mbridge/msdk/foundation/tools/aj;->d:Ljava/lang/String;

    return v2

    .line 158
    :cond_3
    array-length v3, p0

    if-nez v3, :cond_4

    .line 159
    sput v2, Lcom/mbridge/msdk/foundation/tools/aj;->c:I

    const-string p0, "serviceinfos is zero"

    .line 160
    sput-object p0, Lcom/mbridge/msdk/foundation/tools/aj;->d:Ljava/lang/String;

    return v2

    .line 163
    :cond_4
    array-length v3, p0

    move v5, v1

    move v4, v2

    :goto_0
    if-ge v4, v3, :cond_6

    aget-object v5, p0, v4

    .line 164
    iget-object v5, v5, Landroid/content/pm/ServiceInfo;->name:Ljava/lang/String;

    const-string v6, "com.mbridge.msdk.shell.MBService"

    invoke-virtual {v5, v6}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v5

    if-eqz v5, :cond_5

    .line 166
    sput v1, Lcom/mbridge/msdk/foundation/tools/aj;->c:I

    const-string p0, "ok"

    .line 167
    sput-object p0, Lcom/mbridge/msdk/foundation/tools/aj;->d:Ljava/lang/String;

    goto :goto_1

    :cond_5
    const-string v5, "can\'t find service"

    .line 171
    sput-object v5, Lcom/mbridge/msdk/foundation/tools/aj;->d:Ljava/lang/String;

    .line 172
    sput v2, Lcom/mbridge/msdk/foundation/tools/aj;->c:I
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    add-int/lit8 v4, v4, 0x1

    move v5, v2

    goto :goto_0

    :cond_6
    move v1, v5

    :goto_1
    move v2, v1

    goto :goto_2

    :catchall_0
    move-exception p0

    .line 182
    invoke-virtual {p0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p0

    sput-object p0, Lcom/mbridge/msdk/foundation/tools/aj;->d:Ljava/lang/String;

    .line 183
    sput v0, Lcom/mbridge/msdk/foundation/tools/aj;->c:I

    goto :goto_2

    :catch_0
    move-exception p0

    .line 178
    invoke-virtual {p0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p0

    sput-object p0, Lcom/mbridge/msdk/foundation/tools/aj;->d:Ljava/lang/String;

    .line 179
    sput v0, Lcom/mbridge/msdk/foundation/tools/aj;->c:I

    :goto_2
    return v2
.end method

.method public static d(Landroid/content/Context;)Z
    .locals 8

    .line 189
    sget v0, Lcom/mbridge/msdk/foundation/tools/aj;->f:I

    const/4 v1, 0x1

    if-ne v0, v1, :cond_0

    return v1

    :cond_0
    const/4 v2, 0x0

    if-nez v0, :cond_1

    return v2

    :cond_1
    const/4 v0, -0x1

    if-nez p0, :cond_2

    .line 198
    :try_start_0
    sput v0, Lcom/mbridge/msdk/foundation/tools/aj;->f:I

    const-string p0, "context is null"

    .line 199
    sput-object p0, Lcom/mbridge/msdk/foundation/tools/aj;->h:Ljava/lang/String;

    return v2

    .line 202
    :cond_2
    invoke-virtual {p0}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v3

    invoke-virtual {p0}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object p0

    const/16 v4, 0x8

    invoke-virtual {v3, p0, v4}, Landroid/content/pm/PackageManager;->getPackageInfo(Ljava/lang/String;I)Landroid/content/pm/PackageInfo;

    move-result-object p0

    iget-object p0, p0, Landroid/content/pm/PackageInfo;->providers:[Landroid/content/pm/ProviderInfo;

    if-nez p0, :cond_3

    .line 204
    sput v0, Lcom/mbridge/msdk/foundation/tools/aj;->f:I

    const-string p0, "providerInfos is null"

    .line 205
    sput-object p0, Lcom/mbridge/msdk/foundation/tools/aj;->h:Ljava/lang/String;

    return v2

    .line 208
    :cond_3
    array-length v3, p0

    if-nez v3, :cond_4

    const-string p0, "providerInfos is zero"

    .line 209
    sput-object p0, Lcom/mbridge/msdk/foundation/tools/aj;->h:Ljava/lang/String;

    .line 210
    sput v2, Lcom/mbridge/msdk/foundation/tools/aj;->f:I

    return v2

    .line 213
    :cond_4
    array-length v3, p0

    move v5, v1

    move v4, v2

    :goto_0
    if-ge v4, v3, :cond_7

    aget-object v5, p0, v4

    .line 214
    iget-object v6, v5, Landroid/content/pm/ProviderInfo;->name:Ljava/lang/String;

    const-string v7, "com.mbridge.msdk.foundation.tools.MBFileProvider"

    invoke-virtual {v6, v7}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v6

    if-nez v6, :cond_6

    sget-object v6, Lcom/mbridge/msdk/MBridgeConstans;->FILE_PROVIDE_CUSTOM_PATH:Ljava/lang/String;

    invoke-static {v6}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v6

    if-nez v6, :cond_5

    iget-object v5, v5, Landroid/content/pm/ProviderInfo;->name:Ljava/lang/String;

    sget-object v6, Lcom/mbridge/msdk/MBridgeConstans;->FILE_PROVIDE_CUSTOM_PATH:Ljava/lang/String;

    invoke-virtual {v5, v6}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v5

    if-eqz v5, :cond_5

    goto :goto_1

    .line 221
    :cond_5
    sput v2, Lcom/mbridge/msdk/foundation/tools/aj;->f:I

    const-string v5, "providerInfos can\'t find"

    .line 222
    sput-object v5, Lcom/mbridge/msdk/foundation/tools/aj;->h:Ljava/lang/String;

    add-int/lit8 v4, v4, 0x1

    move v5, v2

    goto :goto_0

    .line 216
    :cond_6
    :goto_1
    sput v1, Lcom/mbridge/msdk/foundation/tools/aj;->f:I

    const-string p0, "ok"

    .line 217
    sput-object p0, Lcom/mbridge/msdk/foundation/tools/aj;->h:Ljava/lang/String;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_2

    :cond_7
    move v1, v5

    :goto_2
    move v2, v1

    goto :goto_3

    :catchall_0
    move-exception p0

    .line 232
    invoke-virtual {p0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p0

    sput-object p0, Lcom/mbridge/msdk/foundation/tools/aj;->h:Ljava/lang/String;

    .line 233
    sput v0, Lcom/mbridge/msdk/foundation/tools/aj;->f:I

    goto :goto_3

    :catch_0
    move-exception p0

    .line 228
    sput v0, Lcom/mbridge/msdk/foundation/tools/aj;->f:I

    .line 229
    invoke-virtual {p0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p0

    sput-object p0, Lcom/mbridge/msdk/foundation/tools/aj;->h:Ljava/lang/String;

    :goto_3
    return v2
.end method

.method public static e(Landroid/content/Context;)Z
    .locals 2

    const/4 v0, 0x0

    .line 241
    :try_start_0
    invoke-static {p0}, Lcom/mbridge/msdk/foundation/tools/v;->w(Landroid/content/Context;)I

    move-result p0

    const/16 v1, 0x18

    if-lt p0, v1, :cond_0

    .line 242
    sget p0, Landroid/os/Build$VERSION;->SDK_INT:I
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-lt p0, v1, :cond_0

    const/4 p0, 0x1

    move v0, p0

    goto :goto_0

    :catchall_0
    move-exception p0

    .line 246
    sget-boolean v1, Lcom/mbridge/msdk/MBridgeConstans;->DEBUG:Z

    if-eqz v1, :cond_0

    .line 247
    invoke-virtual {p0}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_0
    :goto_0
    return v0
.end method
