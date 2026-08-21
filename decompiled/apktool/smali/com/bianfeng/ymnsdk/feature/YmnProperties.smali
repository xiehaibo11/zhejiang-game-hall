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

    .line 22
    const/16 v0, 0x8

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

    .line 99
    invoke-direct {p0}, Ljava/util/Properties;-><init>()V

    .line 100
    sget-object v0, Lcom/bianfeng/ymnsdk/feature/YmnProperties;->NAMES:[[Ljava/lang/String;

    array-length v0, v0

    new-array v0, v0, [Ljava/util/List;

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/feature/YmnProperties;->namesArray:[Ljava/util/List;

    .line 101
    const/4 v0, 0x0

    .local v0, "i":I
    :goto_0
    sget-object v1, Lcom/bianfeng/ymnsdk/feature/YmnProperties;->NAMES:[[Ljava/lang/String;

    array-length v2, v1

    if-ge v0, v2, :cond_0

    .line 102
    iget-object v2, p0, Lcom/bianfeng/ymnsdk/feature/YmnProperties;->namesArray:[Ljava/util/List;

    aget-object v1, v1, v0

    invoke-static {v1}, Ljava/util/Arrays;->asList([Ljava/lang/Object;)Ljava/util/List;

    move-result-object v1

    aput-object v1, v2, v0

    .line 101
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    .line 104
    .end local v0    # "i":I
    :cond_0
    return-void
.end method

.method public static getPluginValue(Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;Ljava/lang/String;)Ljava/lang/String;
    .locals 3
    .param p0, "plugin"    # Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;
    .param p1, "name"    # Ljava/lang/String;

    .line 72
    sget-object v0, Lcom/bianfeng/ymnsdk/feature/YmnProperties;->jsoncfgs:Lorg/json/JSONObject;

    const/4 v1, 0x0

    if-eqz v0, :cond_1

    .line 74
    :try_start_0
    invoke-interface {p0}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->getPluginName()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v0

    .line 75
    .local v0, "json":Lorg/json/JSONObject;
    if-eqz v0, :cond_0

    invoke-virtual {v0, p1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object v1

    .line 79
    .end local v0    # "json":Lorg/json/JSONObject;
    :cond_0
    goto :goto_0

    .line 76
    :catch_0
    move-exception v0

    .line 77
    .local v0, "e":Ljava/lang/Exception;
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 78
    return-object v1

    .line 81
    .end local v0    # "e":Ljava/lang/Exception;
    :cond_1
    :goto_0
    sget-object v0, Lcom/bianfeng/ymnsdk/feature/YmnProperties;->properties:Lcom/bianfeng/ymnsdk/feature/YmnProperties;

    if-eqz v0, :cond_2

    .line 82
    invoke-virtual {v0, p1}, Lcom/bianfeng/ymnsdk/feature/YmnProperties;->getProperty(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    return-object v0

    .line 84
    :cond_2
    return-object v1
.end method

.method public static getValue(Ljava/lang/String;)Ljava/lang/String;
    .locals 1
    .param p0, "name"    # Ljava/lang/String;

    .line 88
    sget-object v0, Lcom/bianfeng/ymnsdk/feature/YmnProperties;->jsoncfgs:Lorg/json/JSONObject;

    if-eqz v0, :cond_0

    .line 89
    invoke-virtual {v0, p0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    return-object v0

    .line 91
    :cond_0
    sget-object v0, Lcom/bianfeng/ymnsdk/feature/YmnProperties;->properties:Lcom/bianfeng/ymnsdk/feature/YmnProperties;

    if-eqz v0, :cond_1

    .line 92
    invoke-virtual {v0, p0}, Lcom/bianfeng/ymnsdk/feature/YmnProperties;->getProperty(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    return-object v0

    .line 94
    :cond_1
    const/4 v0, 0x0

    return-object v0
.end method

.method private getValue(Ljava/util/List;)Ljava/lang/String;
    .locals 4
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "*>;)",
            "Ljava/lang/String;"
        }
    .end annotation

    .line 121
    .local p1, "keys":Ljava/util/List;, "Ljava/util/List<*>;"
    invoke-interface {p1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    .line 122
    .local v1, "key":Ljava/lang/Object;
    invoke-static {v1}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v2

    invoke-super {p0, v2}, Ljava/util/Properties;->getProperty(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    .line 123
    .local v2, "value":Ljava/lang/String;
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_0

    return-object v2

    .line 124
    .end local v1    # "key":Ljava/lang/Object;
    .end local v2    # "value":Ljava/lang/String;
    :cond_0
    goto :goto_0

    .line 125
    :cond_1
    const/4 v0, 0x0

    return-object v0
.end method

.method public static init(Landroid/content/Context;)V
    .locals 5
    .param p0, "context"    # Landroid/content/Context;

    .line 31
    const-string v0, "usdk.cfg"

    const-string v1, "ymn.cfg"

    const/4 v2, 0x0

    .line 32
    .local v2, "buf":[B
    :try_start_0
    invoke-virtual {p0}, Landroid/content/Context;->getAssets()Landroid/content/res/AssetManager;

    move-result-object v3

    .line 33
    .local v3, "am":Landroid/content/res/AssetManager;
    invoke-static {p0, v1}, Lcom/bianfeng/ymnsdk/util/ResourceUtil;->assetFileExist(Landroid/content/Context;Ljava/lang/String;)Z

    move-result v4

    if-eqz v4, :cond_0

    .line 34
    invoke-virtual {v3, v1}, Landroid/content/res/AssetManager;->open(Ljava/lang/String;)Ljava/io/InputStream;

    move-result-object v1

    invoke-static {v1}, Lcom/bianfeng/ymnsdk/util/ResourceUtil;->InputStreamToByte(Ljava/io/InputStream;)[B

    move-result-object v1

    .line 35
    .end local v2    # "buf":[B
    .local v1, "buf":[B
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/security/SecurityUtil;->getInstance()Lcom/bianfeng/ymnsdk/util/security/SecurityUtil;

    move-result-object v2

    invoke-virtual {v2, v1}, Lcom/bianfeng/ymnsdk/util/security/SecurityUtil;->decode([B)[B

    move-result-object v2

    .line 37
    .end local v1    # "buf":[B
    .restart local v2    # "buf":[B
    :cond_0
    invoke-static {p0, v0}, Lcom/bianfeng/ymnsdk/util/ResourceUtil;->assetFileExist(Landroid/content/Context;Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_1

    .line 38
    invoke-virtual {v3, v0}, Landroid/content/res/AssetManager;->open(Ljava/lang/String;)Ljava/io/InputStream;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/ResourceUtil;->InputStreamToByte(Ljava/io/InputStream;)[B

    move-result-object v0

    move-object v2, v0

    .line 40
    :cond_1
    const/4 v0, 0x1

    if-eqz v2, :cond_2

    const/4 v1, 0x1

    goto :goto_0

    :cond_2
    const/4 v1, 0x0

    .line 41
    .local v1, "tryNext":Z
    :goto_0
    if-eqz v1, :cond_3

    .line 42
    new-instance v4, Ljava/lang/String;

    invoke-direct {v4, v2}, Ljava/lang/String;-><init>([B)V

    invoke-static {v4}, Lcom/bianfeng/ymnsdk/feature/YmnProperties;->readAsJson(Ljava/lang/String;)Z

    move-result v4

    xor-int/2addr v0, v4

    move v1, v0

    .line 44
    :cond_3
    if-eqz v1, :cond_4

    .line 45
    new-instance v0, Ljava/lang/String;

    invoke-direct {v0, v2}, Ljava/lang/String;-><init>([B)V

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/feature/YmnProperties;->readAsProperties(Ljava/lang/String;)Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 49
    .end local v1    # "tryNext":Z
    .end local v2    # "buf":[B
    .end local v3    # "am":Landroid/content/res/AssetManager;
    :cond_4
    goto :goto_1

    .line 47
    :catch_0
    move-exception v0

    .line 48
    .local v0, "e":Ljava/lang/Exception;
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 50
    .end local v0    # "e":Ljava/lang/Exception;
    :goto_1
    return-void
.end method

.method private static readAsJson(Ljava/lang/String;)Z
    .locals 2
    .param p0, "text"    # Ljava/lang/String;

    .line 54
    :try_start_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0, p0}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    sput-object v0, Lcom/bianfeng/ymnsdk/feature/YmnProperties;->jsoncfgs:Lorg/json/JSONObject;
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    .line 55
    const/4 v0, 0x1

    return v0

    .line 56
    :catch_0
    move-exception v0

    .line 57
    .local v0, "e":Lorg/json/JSONException;
    const/4 v1, 0x0

    return v1
.end method

.method private static readAsProperties(Ljava/lang/String;)Z
    .locals 2
    .param p0, "text"    # Ljava/lang/String;

    .line 63
    :try_start_0
    new-instance v0, Lcom/bianfeng/ymnsdk/feature/YmnProperties;

    invoke-direct {v0}, Lcom/bianfeng/ymnsdk/feature/YmnProperties;-><init>()V

    sput-object v0, Lcom/bianfeng/ymnsdk/feature/YmnProperties;->properties:Lcom/bianfeng/ymnsdk/feature/YmnProperties;

    .line 64
    sget-object v0, Lcom/bianfeng/ymnsdk/feature/YmnProperties;->properties:Lcom/bianfeng/ymnsdk/feature/YmnProperties;

    new-instance v1, Ljava/io/StringReader;

    invoke-direct {v1, p0}, Ljava/io/StringReader;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Ljava/util/Properties;->load(Ljava/io/Reader;)V
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0

    .line 65
    const/4 v0, 0x1

    return v0

    .line 66
    :catch_0
    move-exception v0

    .line 67
    .local v0, "e":Ljava/io/IOException;
    const/4 v1, 0x0

    return v1
.end method


# virtual methods
.method public getProperty(Ljava/lang/String;)Ljava/lang/String;
    .locals 3
    .param p1, "name"    # Ljava/lang/String;

    .line 108
    invoke-super {p0, p1}, Ljava/util/Properties;->getProperty(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 109
    .local v0, "value":Ljava/lang/String;
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    .line 110
    invoke-virtual {v0}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object v1

    return-object v1

    .line 113
    :cond_0
    const/4 v1, 0x0

    .local v1, "i":I
    :goto_0
    sget-object v2, Lcom/bianfeng/ymnsdk/feature/YmnProperties;->NAMES:[[Ljava/lang/String;

    array-length v2, v2

    if-ge v1, v2, :cond_2

    .line 114
    iget-object v2, p0, Lcom/bianfeng/ymnsdk/feature/YmnProperties;->namesArray:[Ljava/util/List;

    aget-object v2, v2, v1

    invoke-interface {v2, p1}, Ljava/util/List;->contains(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_1

    iget-object v2, p0, Lcom/bianfeng/ymnsdk/feature/YmnProperties;->namesArray:[Ljava/util/List;

    aget-object v2, v2, v1

    invoke-direct {p0, v2}, Lcom/bianfeng/ymnsdk/feature/YmnProperties;->getValue(Ljava/util/List;)Ljava/lang/String;

    move-result-object v2

    return-object v2

    .line 113
    :cond_1
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    .line 117
    .end local v1    # "i":I
    :cond_2
    return-object v0
.end method
