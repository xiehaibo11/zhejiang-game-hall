.class public Lcom/bianfeng/ymnsdk/feature/YmnProperties;
.super Ljava/util/Properties;
.source "YmnProperties.java"


# static fields
.field private static final NAMES:[[Ljava/lang/String;

.field private static jsoncfgs:Lorg/json/JSONObject; = null

.field private static properties:Lcom/bianfeng/ymnsdk/feature/YmnProperties; = null

.field private static final serialVersionUID:J = 0x1L


# instance fields
.field private final namesArray:[Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "[",
            "Ljava/util/List<",
            "*>;"
        }
    .end annotation
.end field


# direct methods
.method static constructor <clinit>()V
    .locals 13

    const/16 v0, 0x8

    .line 1
    new-array v0, v0, [[Ljava/lang/String;

    const-string v1, "appid"

    const-string v2, "appId"

    const-string v3, "appID"

    const-string v4, "AppId"

    const-string v5, "Appid"

    const-string v6, "app_id"

    filled-new-array/range {v1 .. v6}, [Ljava/lang/String;

    move-result-object v1

    const/4 v2, 0x0

    aput-object v1, v0, v2

    const-string v1, "appkey"

    const-string v2, "appKey"

    const-string v3, "AppKey"

    const-string v4, "Appkey"

    const-string v5, "app_key"

    filled-new-array {v1, v2, v3, v4, v5}, [Ljava/lang/String;

    move-result-object v1

    const/4 v2, 0x1

    aput-object v1, v0, v2

    const-string v3, "secretkey"

    const-string v4, "secretKey"

    const-string v5, "Secretkey"

    const-string v6, "SecretKey"

    const-string v7, "secret_key"

    const-string v8, "appsecret"

    const-string v9, "appSecret"

    const-string v10, "Appsecret"

    const-string v11, "AppSecret"

    const-string v12, "app_secret"

    filled-new-array/range {v3 .. v12}, [Ljava/lang/String;

    move-result-object v1

    const/4 v2, 0x2

    aput-object v1, v0, v2

    const-string v1, "platPublicKey"

    const-string v2, "publicRsaKey"

    const-string v3, "publickey"

    const-string v4, "publicKey"

    const-string v5, "public_key"

    filled-new-array {v1, v2, v3, v4, v5}, [Ljava/lang/String;

    move-result-object v1

    const/4 v2, 0x3

    aput-object v1, v0, v2

    const-string v1, "privateKey"

    const-string v2, "privatekey"

    const-string v3, "appPrivateKey"

    const-string v4, "private_key"

    filled-new-array {v1, v2, v3, v4}, [Ljava/lang/String;

    move-result-object v1

    const/4 v2, 0x4

    aput-object v1, v0, v2

    const-string v1, "payid"

    const-string v2, "payId"

    const-string v3, "pay_id"

    filled-new-array {v1, v2, v3}, [Ljava/lang/String;

    move-result-object v1

    const/4 v2, 0x5

    aput-object v1, v0, v2

    const-string v1, "cpid"

    const-string v2, "cpId"

    const-string v3, "cp_id"

    filled-new-array {v1, v2, v3}, [Ljava/lang/String;

    move-result-object v1

    const/4 v2, 0x6

    aput-object v1, v0, v2

    const-string v1, "gameid"

    const-string v2, "gameId"

    const-string v3, "game_id"

    filled-new-array {v1, v2, v3}, [Ljava/lang/String;

    move-result-object v1

    const/4 v2, 0x7

    aput-object v1, v0, v2

    sput-object v0, Lcom/bianfeng/ymnsdk/feature/YmnProperties;->NAMES:[[Ljava/lang/String;

    return-void
.end method

.method private constructor <init>()V
    .locals 3

    .line 1
    invoke-direct {p0}, Ljava/util/Properties;-><init>()V

    .line 2
    sget-object v0, Lcom/bianfeng/ymnsdk/feature/YmnProperties;->NAMES:[[Ljava/lang/String;

    array-length v0, v0

    new-array v0, v0, [Ljava/util/List;

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/feature/YmnProperties;->namesArray:[Ljava/util/List;

    const/4 v0, 0x0

    .line 3
    :goto_0
    sget-object v1, Lcom/bianfeng/ymnsdk/feature/YmnProperties;->NAMES:[[Ljava/lang/String;

    array-length v2, v1

    if-ge v0, v2, :cond_0

    .line 4
    iget-object v2, p0, Lcom/bianfeng/ymnsdk/feature/YmnProperties;->namesArray:[Ljava/util/List;

    aget-object v1, v1, v0

    invoke-static {v1}, Ljava/util/Arrays;->asList([Ljava/lang/Object;)Ljava/util/List;

    move-result-object v1

    aput-object v1, v2, v0

    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    :cond_0
    return-void
.end method

.method public static getPluginValue(Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;Ljava/lang/String;)Ljava/lang/String;
    .locals 2

    .line 1
    sget-object v0, Lcom/bianfeng/ymnsdk/feature/YmnProperties;->jsoncfgs:Lorg/json/JSONObject;

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    .line 3
    :try_start_0
    invoke-interface {p0}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->getPluginName()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v0, p0}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object p0

    if-eqz p0, :cond_0

    .line 4
    invoke-virtual {p0, p1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object p0

    :catch_0
    move-exception p0

    .line 6
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    return-object v1

    .line 10
    :cond_0
    sget-object p0, Lcom/bianfeng/ymnsdk/feature/YmnProperties;->properties:Lcom/bianfeng/ymnsdk/feature/YmnProperties;

    if-eqz p0, :cond_1

    .line 11
    invoke-virtual {p0, p1}, Lcom/bianfeng/ymnsdk/feature/YmnProperties;->getProperty(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    return-object p0

    :cond_1
    return-object v1
.end method

.method public static getValue(Ljava/lang/String;)Ljava/lang/String;
    .locals 1

    .line 1
    sget-object v0, Lcom/bianfeng/ymnsdk/feature/YmnProperties;->jsoncfgs:Lorg/json/JSONObject;

    if-eqz v0, :cond_0

    .line 2
    invoke-virtual {v0, p0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    return-object p0

    .line 4
    :cond_0
    sget-object v0, Lcom/bianfeng/ymnsdk/feature/YmnProperties;->properties:Lcom/bianfeng/ymnsdk/feature/YmnProperties;

    if-eqz v0, :cond_1

    .line 5
    invoke-virtual {v0, p0}, Lcom/bianfeng/ymnsdk/feature/YmnProperties;->getProperty(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    return-object p0

    :cond_1
    const/4 p0, 0x0

    return-object p0
.end method

.method private getValue(Ljava/util/List;)Ljava/lang/String;
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "*>;)",
            "Ljava/lang/String;"
        }
    .end annotation

    .line 6
    invoke-interface {p1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :cond_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_1

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    .line 7
    invoke-static {v0}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    invoke-super {p0, v0}, Ljava/util/Properties;->getProperty(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 8
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    return-object v0

    :cond_1
    const/4 p1, 0x0

    return-object p1
.end method

.method public static init(Landroid/content/Context;)V
    .locals 4

    const-string v0, "usdk.cfg"

    const-string v1, "ymn.cfg"

    .line 1
    :try_start_0
    invoke-virtual {p0}, Landroid/content/Context;->getAssets()Landroid/content/res/AssetManager;

    move-result-object v2

    .line 2
    invoke-static {p0, v1}, Lcom/bianfeng/ymnsdk/util/ResourceUtil;->assetFileExist(Landroid/content/Context;Ljava/lang/String;)Z

    move-result v3

    if-eqz v3, :cond_0

    .line 3
    invoke-virtual {v2, v1}, Landroid/content/res/AssetManager;->open(Ljava/lang/String;)Ljava/io/InputStream;

    move-result-object v1

    invoke-static {v1}, Lcom/bianfeng/ymnsdk/util/ResourceUtil;->InputStreamToByte(Ljava/io/InputStream;)[B

    move-result-object v1

    .line 4
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/security/SecurityUtil;->getInstance()Lcom/bianfeng/ymnsdk/util/security/SecurityUtil;

    move-result-object v3

    invoke-virtual {v3, v1}, Lcom/bianfeng/ymnsdk/util/security/SecurityUtil;->decode([B)[B

    move-result-object v1

    goto :goto_0

    :cond_0
    const/4 v1, 0x0

    .line 6
    :goto_0
    invoke-static {p0, v0}, Lcom/bianfeng/ymnsdk/util/ResourceUtil;->assetFileExist(Landroid/content/Context;Ljava/lang/String;)Z

    move-result p0

    if-eqz p0, :cond_1

    .line 7
    invoke-virtual {v2, v0}, Landroid/content/res/AssetManager;->open(Ljava/lang/String;)Ljava/io/InputStream;

    move-result-object p0

    invoke-static {p0}, Lcom/bianfeng/ymnsdk/util/ResourceUtil;->InputStreamToByte(Ljava/io/InputStream;)[B

    move-result-object v1

    :cond_1
    const/4 p0, 0x1

    if-eqz v1, :cond_2

    const/4 v0, 0x1

    goto :goto_1

    :cond_2
    const/4 v0, 0x0

    :goto_1
    if-eqz v0, :cond_3

    .line 11
    new-instance v0, Ljava/lang/String;

    invoke-direct {v0, v1}, Ljava/lang/String;-><init>([B)V

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/feature/YmnProperties;->readAsJson(Ljava/lang/String;)Z

    move-result v0

    xor-int/2addr v0, p0

    :cond_3
    if-eqz v0, :cond_4

    .line 14
    new-instance p0, Ljava/lang/String;

    invoke-direct {p0, v1}, Ljava/lang/String;-><init>([B)V

    invoke-static {p0}, Lcom/bianfeng/ymnsdk/feature/YmnProperties;->readAsProperties(Ljava/lang/String;)Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_2

    :catch_0
    move-exception p0

    .line 17
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_4
    :goto_2
    return-void
.end method

.method private static readAsJson(Ljava/lang/String;)Z
    .locals 1

    .line 1
    :try_start_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0, p0}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    sput-object v0, Lcom/bianfeng/ymnsdk/feature/YmnProperties;->jsoncfgs:Lorg/json/JSONObject;
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    const/4 p0, 0x1

    return p0

    :catch_0
    const/4 p0, 0x0

    return p0
.end method

.method private static readAsProperties(Ljava/lang/String;)Z
    .locals 2

    .line 1
    :try_start_0
    new-instance v0, Lcom/bianfeng/ymnsdk/feature/YmnProperties;

    invoke-direct {v0}, Lcom/bianfeng/ymnsdk/feature/YmnProperties;-><init>()V

    sput-object v0, Lcom/bianfeng/ymnsdk/feature/YmnProperties;->properties:Lcom/bianfeng/ymnsdk/feature/YmnProperties;

    .line 2
    sget-object v0, Lcom/bianfeng/ymnsdk/feature/YmnProperties;->properties:Lcom/bianfeng/ymnsdk/feature/YmnProperties;

    new-instance v1, Ljava/io/StringReader;

    invoke-direct {v1, p0}, Ljava/io/StringReader;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Ljava/util/Properties;->load(Ljava/io/Reader;)V
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0

    const/4 p0, 0x1

    return p0

    :catch_0
    const/4 p0, 0x0

    return p0
.end method


# virtual methods
.method public getProperty(Ljava/lang/String;)Ljava/lang/String;
    .locals 3

    .line 1
    invoke-super {p0, p1}, Ljava/util/Properties;->getProperty(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 2
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    .line 3
    invoke-virtual {v0}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object p1

    return-object p1

    :cond_0
    const/4 v1, 0x0

    .line 6
    :goto_0
    sget-object v2, Lcom/bianfeng/ymnsdk/feature/YmnProperties;->NAMES:[[Ljava/lang/String;

    array-length v2, v2

    if-ge v1, v2, :cond_2

    .line 7
    iget-object v2, p0, Lcom/bianfeng/ymnsdk/feature/YmnProperties;->namesArray:[Ljava/util/List;

    aget-object v2, v2, v1

    invoke-interface {v2, p1}, Ljava/util/List;->contains(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_1

    iget-object p1, p0, Lcom/bianfeng/ymnsdk/feature/YmnProperties;->namesArray:[Ljava/util/List;

    aget-object p1, p1, v1

    invoke-direct {p0, p1}, Lcom/bianfeng/ymnsdk/feature/YmnProperties;->getValue(Ljava/util/List;)Ljava/lang/String;

    move-result-object p1

    return-object p1

    :cond_1
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :cond_2
    return-object v0
.end method
