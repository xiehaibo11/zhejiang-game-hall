.class public Lcom/qihoo360/replugin/packages/PluginFastInstallProvider;
.super Landroid/content/ContentProvider;
.source "PluginFastInstallProvider.java"


# static fields
.field public static final AUTHORITY:Ljava/lang/String;

.field public static final CONTENT_URI:Landroid/net/Uri;

.field public static final KEY_PLUGIN_INFO:Ljava/lang/String; = "pi"

.field public static final SELECTION_INSTALL:Ljava/lang/String; = "inst"

.field private static final TAG:Ljava/lang/String; = "PluginFastInstallPv"


# direct methods
.method static constructor <clinit>()V
    .locals 2

    .line 41
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Lcom/qihoo360/replugin/base/IPC;->getPackageName()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, ".loader.p.pip"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/qihoo360/replugin/packages/PluginFastInstallProvider;->AUTHORITY:Ljava/lang/String;

    .line 43
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "content://"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v1, Lcom/qihoo360/replugin/packages/PluginFastInstallProvider;->AUTHORITY:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object v0

    sput-object v0, Lcom/qihoo360/replugin/packages/PluginFastInstallProvider;->CONTENT_URI:Landroid/net/Uri;

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 37
    invoke-direct {p0}, Landroid/content/ContentProvider;-><init>()V

    return-void
.end method

.method private install(Landroid/content/ContentValues;)I
    .locals 2

    const/4 v0, 0x0

    if-nez p1, :cond_0

    return v0

    :cond_0
    const-string v1, "pi"

    .line 86
    invoke-virtual {p1, v1}, Landroid/content/ContentValues;->getAsString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    .line 87
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_1

    return v0

    .line 90
    :cond_1
    invoke-static {p1}, Lcom/qihoo360/replugin/model/PluginInfo;->parseFromJsonText(Ljava/lang/String;)Lcom/qihoo360/replugin/model/PluginInfo;

    move-result-object p1

    .line 93
    invoke-static {}, Lcom/qihoo360/loader2/PMF;->getLocal()Lcom/qihoo360/loader2/PluginCommImpl;

    move-result-object v1

    invoke-virtual {v1, p1}, Lcom/qihoo360/loader2/PluginCommImpl;->loadPluginClassLoader(Lcom/qihoo360/replugin/model/PluginInfo;)Ljava/lang/ClassLoader;

    move-result-object p1

    if-eqz p1, :cond_2

    const/4 p1, 0x1

    return p1

    :cond_2
    return v0
.end method

.method static makeInstallValues(Lcom/qihoo360/replugin/model/PluginInfo;)Landroid/content/ContentValues;
    .locals 2

    .line 53
    new-instance v0, Landroid/content/ContentValues;

    invoke-direct {v0}, Landroid/content/ContentValues;-><init>()V

    .line 54
    invoke-virtual {p0}, Lcom/qihoo360/replugin/model/PluginInfo;->getJSON()Lorg/json/JSONObject;

    move-result-object p0

    invoke-virtual {p0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p0

    const-string v1, "pi"

    invoke-virtual {v0, v1, p0}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    return-object v0
.end method


# virtual methods
.method public delete(Landroid/net/Uri;Ljava/lang/String;[Ljava/lang/String;)I
    .locals 0

    const/4 p1, 0x0

    return p1
.end method

.method public getType(Landroid/net/Uri;)Ljava/lang/String;
    .locals 0

    const/4 p1, 0x0

    return-object p1
.end method

.method public insert(Landroid/net/Uri;Landroid/content/ContentValues;)Landroid/net/Uri;
    .locals 0

    const/4 p1, 0x0

    return-object p1
.end method

.method public onCreate()Z
    .locals 1

    const/4 v0, 0x1

    return v0
.end method

.method public query(Landroid/net/Uri;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;
    .locals 0

    const/4 p1, 0x0

    return-object p1
.end method

.method public update(Landroid/net/Uri;Landroid/content/ContentValues;Ljava/lang/String;[Ljava/lang/String;)I
    .locals 2

    .line 66
    sget-boolean p1, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz p1, :cond_0

    .line 67
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string p4, "update: cv="

    invoke-virtual {p1, p4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string p4, "PluginFastInstallPv"

    invoke-static {p4, p1}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 70
    :cond_0
    invoke-static {p3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    const/4 p4, 0x0

    if-eqz p1, :cond_1

    return p4

    :cond_1
    const/4 p1, -0x1

    .line 73
    invoke-virtual {p3}, Ljava/lang/String;->hashCode()I

    move-result v0

    const v1, 0x316646

    if-eq v0, v1, :cond_2

    goto :goto_0

    :cond_2
    const-string v0, "inst"

    invoke-virtual {p3, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p3

    if-eqz p3, :cond_3

    move p1, p4

    :cond_3
    :goto_0
    if-eqz p1, :cond_4

    return p4

    .line 75
    :cond_4
    invoke-direct {p0, p2}, Lcom/qihoo360/replugin/packages/PluginFastInstallProvider;->install(Landroid/content/ContentValues;)I

    move-result p1

    return p1
.end method
