.class public Lcom/bianfeng/ymnsdk/feature/YmnCallback$a;
.super Ljava/lang/Object;
.source "YmnCallback.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/bianfeng/ymnsdk/feature/YmnCallback;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
    name = "a"
.end annotation


# instance fields
.field private a:Ljava/lang/Object;

.field private b:Ljava/lang/Object;


# direct methods
.method private constructor <init>()V
    .locals 0

    .line 37
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 38
    return-void
.end method

.method public constructor <init>(Ljava/lang/Object;Ljava/lang/Object;)V
    .locals 0
    .param p1, "data"    # Ljava/lang/Object;
    .param p2, "ext"    # Ljava/lang/Object;

    .line 32
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 33
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/feature/YmnCallback$a;->a:Ljava/lang/Object;

    .line 34
    iput-object p2, p0, Lcom/bianfeng/ymnsdk/feature/YmnCallback$a;->b:Ljava/lang/Object;

    .line 35
    return-void
.end method

.method public static a(Ljava/lang/String;)Lcom/bianfeng/ymnsdk/feature/YmnCallback$a;
    .locals 3
    .param p0, "text"    # Ljava/lang/String;

    .line 41
    const-string v0, "_YMN_RCM_ST_"

    invoke-virtual {v0}, Ljava/lang/String;->length()I

    move-result v0

    invoke-virtual {p0, v0}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object p0

    .line 42
    const-string v0, "_YMN_RCM_SE_"

    invoke-virtual {p0, v0}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v0

    .line 44
    .local v0, "arrays":[Ljava/lang/String;
    new-instance v1, Lcom/bianfeng/ymnsdk/feature/YmnCallback$a;

    invoke-direct {v1}, Lcom/bianfeng/ymnsdk/feature/YmnCallback$a;-><init>()V

    .line 45
    .local v1, "message":Lcom/bianfeng/ymnsdk/feature/YmnCallback$a;
    const/4 v2, 0x0

    aget-object v2, v0, v2

    invoke-static {v2}, Lcom/bianfeng/ymnsdk/feature/YmnCallback$a;->c(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v2

    iput-object v2, v1, Lcom/bianfeng/ymnsdk/feature/YmnCallback$a;->a:Ljava/lang/Object;

    .line 46
    const/4 v2, 0x1

    aget-object v2, v0, v2

    invoke-static {v2}, Lcom/bianfeng/ymnsdk/feature/YmnCallback$a;->c(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v2

    iput-object v2, v1, Lcom/bianfeng/ymnsdk/feature/YmnCallback$a;->b:Ljava/lang/Object;

    .line 48
    return-object v1
.end method

.method private static a(Ljava/lang/Object;)Ljava/lang/String;
    .locals 1
    .param p0, "object"    # Ljava/lang/Object;

    .line 56
    if-nez p0, :cond_0

    const-string v0, "_YMN_RCM_NU_"

    return-object v0

    .line 57
    :cond_0
    invoke-virtual {p0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_1

    const-string v0, "_YMN_RCM_EM_"

    return-object v0

    .line 58
    :cond_1
    invoke-virtual {p0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public static b(Ljava/lang/String;)Z
    .locals 1
    .param p0, "text"    # Ljava/lang/String;

    .line 52
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    const-string v0, "_YMN_RCM_ST_"

    invoke-virtual {p0, v0}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method private static c(Ljava/lang/String;)Ljava/lang/Object;
    .locals 1
    .param p0, "string"    # Ljava/lang/String;

    .line 63
    :try_start_0
    const-string v0, "_YMN_RCM_NU_"

    invoke-virtual {v0, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 64
    const/4 v0, 0x0

    return-object v0

    .line 66
    :cond_0
    const-string v0, "_YMN_RCM_EM_"

    invoke-virtual {v0, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 67
    const-string v0, ""

    return-object v0

    .line 69
    :cond_1
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0, p0}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    .line 70
    :catch_0
    move-exception v0

    .line 71
    .local v0, "e":Lorg/json/JSONException;
    return-object p0
.end method


# virtual methods
.method public a()Ljava/lang/Object;
    .locals 1

    .line 25
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/YmnCallback$a;->a:Ljava/lang/Object;

    return-object v0
.end method

.method public b()Ljava/lang/Object;
    .locals 1

    .line 29
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/YmnCallback$a;->b:Ljava/lang/Object;

    return-object v0
.end method

.method public toString()Ljava/lang/String;
    .locals 2

    .line 77
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "_YMN_RCM_ST_"

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    .line 78
    .local v0, "builder":Ljava/lang/StringBuilder;
    iget-object v1, p0, Lcom/bianfeng/ymnsdk/feature/YmnCallback$a;->a:Ljava/lang/Object;

    invoke-static {v1}, Lcom/bianfeng/ymnsdk/feature/YmnCallback$a;->a(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 79
    const-string v1, "_YMN_RCM_SE_"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 80
    iget-object v1, p0, Lcom/bianfeng/ymnsdk/feature/YmnCallback$a;->b:Ljava/lang/Object;

    invoke-static {v1}, Lcom/bianfeng/ymnsdk/feature/YmnCallback$a;->a(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 81
    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    return-object v1
.end method
