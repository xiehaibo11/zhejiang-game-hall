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

    .line 4
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public constructor <init>(Ljava/lang/Object;Ljava/lang/Object;)V
    .locals 0

    .line 1
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 2
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/feature/YmnCallback$a;->a:Ljava/lang/Object;

    .line 3
    iput-object p2, p0, Lcom/bianfeng/ymnsdk/feature/YmnCallback$a;->b:Ljava/lang/Object;

    return-void
.end method

.method public static a(Ljava/lang/String;)Lcom/bianfeng/ymnsdk/feature/YmnCallback$a;
    .locals 2

    const/16 v0, 0xc

    .line 2
    invoke-virtual {p0, v0}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object p0

    const-string v0, "_YMN_RCM_SE_"

    .line 3
    invoke-virtual {p0, v0}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object p0

    .line 5
    new-instance v0, Lcom/bianfeng/ymnsdk/feature/YmnCallback$a;

    invoke-direct {v0}, Lcom/bianfeng/ymnsdk/feature/YmnCallback$a;-><init>()V

    const/4 v1, 0x0

    .line 6
    aget-object v1, p0, v1

    invoke-static {v1}, Lcom/bianfeng/ymnsdk/feature/YmnCallback$a;->c(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v1

    iput-object v1, v0, Lcom/bianfeng/ymnsdk/feature/YmnCallback$a;->a:Ljava/lang/Object;

    const/4 v1, 0x1

    .line 7
    aget-object p0, p0, v1

    invoke-static {p0}, Lcom/bianfeng/ymnsdk/feature/YmnCallback$a;->c(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p0

    iput-object p0, v0, Lcom/bianfeng/ymnsdk/feature/YmnCallback$a;->b:Ljava/lang/Object;

    return-object v0
.end method

.method private static a(Ljava/lang/Object;)Ljava/lang/String;
    .locals 1

    if-nez p0, :cond_0

    const-string p0, "_YMN_RCM_NU_"

    return-object p0

    .line 8
    :cond_0
    invoke-virtual {p0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_1

    const-string p0, "_YMN_RCM_EM_"

    return-object p0

    .line 9
    :cond_1
    invoke-virtual {p0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static b(Ljava/lang/String;)Z
    .locals 1

    .line 2
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    const-string v0, "_YMN_RCM_ST_"

    invoke-virtual {p0, v0}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result p0

    if-eqz p0, :cond_0

    const/4 p0, 0x1

    goto :goto_0

    :cond_0
    const/4 p0, 0x0

    :goto_0
    return p0
.end method

.method private static c(Ljava/lang/String;)Ljava/lang/Object;
    .locals 1

    :try_start_0
    const-string v0, "_YMN_RCM_NU_"

    .line 1
    invoke-virtual {v0, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 p0, 0x0

    return-object p0

    :cond_0
    const-string v0, "_YMN_RCM_EM_"

    .line 4
    invoke-virtual {v0, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    if-eqz v0, :cond_1

    const-string p0, ""

    return-object p0

    .line 7
    :cond_1
    :try_start_1
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0, p0}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V
    :try_end_1
    .catch Lorg/json/JSONException; {:try_start_1 .. :try_end_1} :catch_0

    return-object v0

    :catch_0
    return-object p0
.end method


# virtual methods
.method public a()Ljava/lang/Object;
    .locals 1

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/YmnCallback$a;->a:Ljava/lang/Object;

    return-object v0
.end method

.method public b()Ljava/lang/Object;
    .locals 1

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/YmnCallback$a;->b:Ljava/lang/Object;

    return-object v0
.end method

.method public toString()Ljava/lang/String;
    .locals 2

    .line 1
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "_YMN_RCM_ST_"

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    .line 2
    iget-object v1, p0, Lcom/bianfeng/ymnsdk/feature/YmnCallback$a;->a:Ljava/lang/Object;

    invoke-static {v1}, Lcom/bianfeng/ymnsdk/feature/YmnCallback$a;->a(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "_YMN_RCM_SE_"

    .line 3
    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 4
    iget-object v1, p0, Lcom/bianfeng/ymnsdk/feature/YmnCallback$a;->b:Ljava/lang/Object;

    invoke-static {v1}, Lcom/bianfeng/ymnsdk/feature/YmnCallback$a;->a(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 5
    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
