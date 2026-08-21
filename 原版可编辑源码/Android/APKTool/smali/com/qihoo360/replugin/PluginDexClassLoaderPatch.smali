.class public Lcom/qihoo360/replugin/PluginDexClassLoaderPatch;
.super Ljava/lang/Object;
.source "PluginDexClassLoaderPatch.java"


# static fields
.field private static final APACHE_HTTP_LEGACY_PACKAGES:[Ljava/lang/String;

.field private static final OKHTTP3_PACKAGES:[Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 6

    const-string v0, "android.net.http"

    const-string v1, "android.net.compatibility"

    const-string v2, "com.android.internal.http.multipart"

    const-string v3, "org.apache.commons.codec"

    const-string v4, "org.apache.commons.logging"

    const-string v5, "org.apache.http"

    .line 11
    filled-new-array/range {v0 .. v5}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/qihoo360/replugin/PluginDexClassLoaderPatch;->APACHE_HTTP_LEGACY_PACKAGES:[Ljava/lang/String;

    const-string v0, "okhttp3"

    const-string v1, "okio"

    .line 17
    filled-new-array {v0, v1}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/qihoo360/replugin/PluginDexClassLoaderPatch;->OKHTTP3_PACKAGES:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 8
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private static isApacheHttpLegacy(Ljava/lang/String;)Z
    .locals 5

    .line 43
    sget-object v0, Lcom/qihoo360/replugin/PluginDexClassLoaderPatch;->APACHE_HTTP_LEGACY_PACKAGES:[Ljava/lang/String;

    array-length v1, v0

    const/4 v2, 0x0

    move v3, v2

    :goto_0
    if-ge v3, v1, :cond_1

    aget-object v4, v0, v3

    .line 44
    invoke-virtual {p0, v4}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v4

    if-eqz v4, :cond_0

    const/4 p0, 0x1

    return p0

    :cond_0
    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    :cond_1
    return v2
.end method

.method private static isOkHttp3(Ljava/lang/String;)Z
    .locals 5

    .line 57
    sget-object v0, Lcom/qihoo360/replugin/PluginDexClassLoaderPatch;->OKHTTP3_PACKAGES:[Ljava/lang/String;

    array-length v1, v0

    const/4 v2, 0x0

    move v3, v2

    :goto_0
    if-ge v3, v1, :cond_1

    aget-object v4, v0, v3

    .line 58
    invoke-virtual {p0, v4}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v4

    if-eqz v4, :cond_0

    const/4 p0, 0x1

    return p0

    :cond_0
    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    :cond_1
    return v2
.end method

.method public static need2LoadFromHost(Ljava/lang/String;)Z
    .locals 1

    .line 28
    invoke-static {p0}, Lcom/qihoo360/replugin/PluginDexClassLoaderPatch;->isOkHttp3(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_1

    invoke-static {p0}, Lcom/qihoo360/replugin/PluginDexClassLoaderPatch;->isApacheHttpLegacy(Ljava/lang/String;)Z

    move-result p0

    if-eqz p0, :cond_0

    goto :goto_0

    :cond_0
    const/4 p0, 0x0

    goto :goto_1

    :cond_1
    :goto_0
    const/4 p0, 0x1

    :goto_1
    return p0
.end method
