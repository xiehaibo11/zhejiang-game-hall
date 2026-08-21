.class public Lcom/sigmob/sdk/mraid/b;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/sigmob/sdk/mraid/b$a;,
        Lcom/sigmob/sdk/mraid/b$b;,
        Lcom/sigmob/sdk/mraid/b$c;
    }
.end annotation


# static fields
.field static final a:Ljava/lang/String; = "mraid://open?url="


# instance fields
.field private final b:Lcom/sigmob/sdk/base/models/BaseAdUnit;

.field private final c:Lcom/sigmob/sdk/base/models/PlacementType;

.field private final d:Lcom/sigmob/sdk/mraid/h;

.field private e:Ljava/lang/String;

.field private f:Lcom/sigmob/sdk/mraid/b$b;

.field private g:Lcom/sigmob/sdk/mraid/o;

.field private h:Lcom/sigmob/sdk/base/common/aj;

.field private i:Z

.field private final j:Landroid/webkit/WebViewClient;

.field private k:Lcom/sigmob/sdk/mraid/b$c;


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/models/PlacementType;)V
    .locals 1

    new-instance v0, Lcom/sigmob/sdk/mraid/h;

    invoke-direct {v0}, Lcom/sigmob/sdk/mraid/h;-><init>()V

    invoke-direct {p0, p1, p2, v0}, Lcom/sigmob/sdk/mraid/b;-><init>(Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/models/PlacementType;Lcom/sigmob/sdk/mraid/h;)V

    return-void
.end method

.method constructor <init>(Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/models/PlacementType;Lcom/sigmob/sdk/mraid/h;)V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    new-instance v0, Lcom/sigmob/sdk/mraid/b$1;

    invoke-direct {v0, p0}, Lcom/sigmob/sdk/mraid/b$1;-><init>(Lcom/sigmob/sdk/mraid/b;)V

    iput-object v0, p0, Lcom/sigmob/sdk/mraid/b;->j:Landroid/webkit/WebViewClient;

    iput-object p1, p0, Lcom/sigmob/sdk/mraid/b;->b:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    iput-object p2, p0, Lcom/sigmob/sdk/mraid/b;->c:Lcom/sigmob/sdk/base/models/PlacementType;

    iput-object p3, p0, Lcom/sigmob/sdk/mraid/b;->d:Lcom/sigmob/sdk/mraid/h;

    return-void
.end method

.method private a(III)I
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/sigmob/sdk/mraid/c;
        }
    .end annotation

    if-lt p1, p2, :cond_0

    if-gt p1, p3, :cond_0

    return p1

    :cond_0
    new-instance p2, Lcom/sigmob/sdk/mraid/c;

    new-instance p3, Ljava/lang/StringBuilder;

    invoke-direct {p3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "Integer parameter out of range: "

    invoke-virtual {p3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p3, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-direct {p2, p1}, Lcom/sigmob/sdk/mraid/c;-><init>(Ljava/lang/String;)V

    throw p2
.end method

.method static synthetic a(Lcom/sigmob/sdk/mraid/b;)Lcom/sigmob/sdk/base/models/BaseAdUnit;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/mraid/b;->b:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    return-object p0
.end method

.method private a(Ljava/lang/String;Lcom/sigmob/sdk/mraid/a$a;)Lcom/sigmob/sdk/mraid/a$a;
    .locals 2
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/sigmob/sdk/mraid/c;
        }
    .end annotation

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    return-object p2

    :cond_0
    const-string p2, "top-left"

    invoke-virtual {p1, p2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p2

    if-eqz p2, :cond_1

    sget-object p1, Lcom/sigmob/sdk/mraid/a$a;->a:Lcom/sigmob/sdk/mraid/a$a;

    return-object p1

    :cond_1
    const-string p2, "top-right"

    invoke-virtual {p1, p2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p2

    if-eqz p2, :cond_2

    sget-object p1, Lcom/sigmob/sdk/mraid/a$a;->c:Lcom/sigmob/sdk/mraid/a$a;

    return-object p1

    :cond_2
    const-string p2, "center"

    invoke-virtual {p1, p2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p2

    if-eqz p2, :cond_3

    sget-object p1, Lcom/sigmob/sdk/mraid/a$a;->d:Lcom/sigmob/sdk/mraid/a$a;

    return-object p1

    :cond_3
    const-string p2, "bottom-left"

    invoke-virtual {p1, p2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p2

    if-eqz p2, :cond_4

    sget-object p1, Lcom/sigmob/sdk/mraid/a$a;->e:Lcom/sigmob/sdk/mraid/a$a;

    return-object p1

    :cond_4
    const-string p2, "bottom-right"

    invoke-virtual {p1, p2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p2

    if-eqz p2, :cond_5

    sget-object p1, Lcom/sigmob/sdk/mraid/a$a;->g:Lcom/sigmob/sdk/mraid/a$a;

    return-object p1

    :cond_5
    const-string p2, "top-center"

    invoke-virtual {p1, p2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p2

    if-eqz p2, :cond_6

    sget-object p1, Lcom/sigmob/sdk/mraid/a$a;->b:Lcom/sigmob/sdk/mraid/a$a;

    return-object p1

    :cond_6
    const-string p2, "bottom-center"

    invoke-virtual {p1, p2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p2

    if-eqz p2, :cond_7

    sget-object p1, Lcom/sigmob/sdk/mraid/a$a;->f:Lcom/sigmob/sdk/mraid/a$a;

    return-object p1

    :cond_7
    new-instance p2, Lcom/sigmob/sdk/mraid/c;

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "Invalid close position: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-direct {p2, p1}, Lcom/sigmob/sdk/mraid/c;-><init>(Ljava/lang/String;)V

    throw p2
.end method

.method public static a(ILjava/lang/String;Ljava/lang/Object;)Ljava/lang/String;
    .locals 2

    :try_start_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    const-string v1, "code"

    invoke-virtual {v0, v1, p0}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p0

    if-nez p0, :cond_0

    const-string p0, "message"

    invoke-virtual {v0, p0, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :cond_0
    if-eqz p2, :cond_1

    const-string p0, "data"

    invoke-virtual {v0, p0, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :cond_1
    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object p0

    :catchall_0
    move-exception p0

    invoke-virtual {p0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method private a(Landroid/graphics/Rect;)Ljava/lang/String;
    .locals 3

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget v1, p1, Landroid/graphics/Rect;->left:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, ","

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v2, p1, Landroid/graphics/Rect;->top:I

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Landroid/graphics/Rect;->width()I

    move-result v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Landroid/graphics/Rect;->height()I

    move-result p1

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    return-object p1
.end method

.method static synthetic a(Lcom/sigmob/sdk/mraid/b;Ljava/lang/String;)Ljava/lang/String;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/mraid/b;->e:Ljava/lang/String;

    return-object p1
.end method

.method public static a(Ljava/lang/String;)Ljava/lang/String;
    .locals 2

    const/4 v0, 0x0

    if-nez p0, :cond_0

    return-object v0

    :cond_0
    const-string v1, "null"

    invoke-virtual {p0, v1}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v1

    if-nez v1, :cond_2

    const-string v1, "undefined"

    invoke-virtual {p0, v1}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_1

    goto :goto_0

    :cond_1
    return-object p0

    :cond_2
    :goto_0
    return-object v0
.end method

.method private a(Ljava/lang/String;Ljava/net/URI;)Ljava/net/URI;
    .locals 0
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/sigmob/sdk/mraid/c;
        }
    .end annotation

    if-nez p1, :cond_0

    return-object p2

    :cond_0
    invoke-direct {p0, p1}, Lcom/sigmob/sdk/mraid/b;->i(Ljava/lang/String;)Ljava/net/URI;

    move-result-object p1

    return-object p1
.end method

.method static synthetic a(Lcom/sigmob/sdk/mraid/b;Lcom/sigmob/sdk/mraid/g;Ljava/lang/String;)V
    .locals 0

    invoke-direct {p0, p1, p2}, Lcom/sigmob/sdk/mraid/b;->a(Lcom/sigmob/sdk/mraid/g;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic a(Lcom/sigmob/sdk/mraid/b;Ljava/lang/String;Ljava/lang/String;Lorg/json/JSONObject;)V
    .locals 0

    invoke-direct {p0, p1, p2, p3}, Lcom/sigmob/sdk/mraid/b;->a(Ljava/lang/String;Ljava/lang/String;Lorg/json/JSONObject;)V

    return-void
.end method

.method private a(Lcom/sigmob/sdk/mraid/g;)V
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "window.mraidbridge.nativeCallComplete("

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/sigmob/sdk/mraid/g;->a()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lorg/json/JSONObject;->quote(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, ")"

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/mraid/b;->c(Ljava/lang/String;)V

    return-void
.end method

.method private a(Lcom/sigmob/sdk/mraid/g;Ljava/lang/String;)V
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "window.mraidbridge.notifyErrorEvent("

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/sigmob/sdk/mraid/g;->a()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lorg/json/JSONObject;->quote(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, ", "

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {p2}, Lorg/json/JSONObject;->quote(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, ")"

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/mraid/b;->c(Ljava/lang/String;)V

    return-void
.end method

.method private a(Ljava/lang/String;Ljava/lang/String;Lorg/json/JSONObject;)V
    .locals 3

    invoke-virtual {p1}, Ljava/lang/String;->hashCode()I

    move-result v0

    const v1, 0x6b33842

    const/4 v2, 0x1

    if-eq v0, v1, :cond_1

    const v1, 0x4677fb74

    if-eq v0, v1, :cond_0

    goto :goto_0

    :cond_0
    const-string v0, "belowSubview"

    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_2

    move p1, v2

    goto :goto_1

    :cond_1
    const-string v0, "vpaid"

    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_2

    const/4 p1, 0x0

    goto :goto_1

    :cond_2
    :goto_0
    const/4 p1, -0x1

    :goto_1
    if-eqz p1, :cond_4

    if-eq p1, v2, :cond_3

    goto :goto_2

    :cond_3
    iget-object p1, p0, Lcom/sigmob/sdk/mraid/b;->k:Lcom/sigmob/sdk/mraid/b$c;

    invoke-interface {p1, p2, p3}, Lcom/sigmob/sdk/mraid/b$c;->b(Ljava/lang/String;Lorg/json/JSONObject;)V

    goto :goto_2

    :cond_4
    iget-object p1, p0, Lcom/sigmob/sdk/mraid/b;->k:Lcom/sigmob/sdk/mraid/b$c;

    invoke-interface {p1, p2, p3}, Lcom/sigmob/sdk/mraid/b$c;->a(Ljava/lang/String;Lorg/json/JSONObject;)V

    :goto_2
    return-void
.end method

.method private a(Ljava/lang/String;Z)Z
    .locals 0
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/sigmob/sdk/mraid/c;
        }
    .end annotation

    if-nez p1, :cond_0

    return p2

    :cond_0
    invoke-direct {p0, p1}, Lcom/sigmob/sdk/mraid/b;->h(Ljava/lang/String;)Z

    move-result p1

    return p1
.end method

.method private b(Landroid/graphics/Rect;)Ljava/lang/String;
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p1}, Landroid/graphics/Rect;->width()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, ","

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Landroid/graphics/Rect;->height()I

    move-result p1

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    return-object p1
.end method

.method static synthetic b(Lcom/sigmob/sdk/mraid/b;)V
    .locals 0

    invoke-direct {p0}, Lcom/sigmob/sdk/mraid/b;->o()V

    return-void
.end method

.method static synthetic c(Lcom/sigmob/sdk/mraid/b;)Lcom/sigmob/sdk/mraid/b$b;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/mraid/b;->f:Lcom/sigmob/sdk/mraid/b$b;

    return-object p0
.end method

.method private c(Ljava/lang/String;Ljava/lang/String;)Ljava/net/URI;
    .locals 2
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/sigmob/sdk/mraid/c;
        }
    .end annotation

    if-nez p1, :cond_0

    :try_start_0
    new-instance v0, Ljava/net/URI;

    invoke-direct {v0, p2}, Ljava/net/URI;-><init>(Ljava/lang/String;)V

    return-object v0

    :cond_0
    new-instance v0, Ljava/net/URI;

    invoke-direct {v0, p1}, Ljava/net/URI;-><init>(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/net/URISyntaxException; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    :catch_0
    :try_start_1
    new-instance v0, Ljava/net/URI;

    invoke-direct {v0, p2}, Ljava/net/URI;-><init>(Ljava/lang/String;)V
    :try_end_1
    .catch Ljava/net/URISyntaxException; {:try_start_1 .. :try_end_1} :catch_1

    return-object v0

    :catch_1
    new-instance p2, Lcom/sigmob/sdk/mraid/c;

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "Invalid URL parameter: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-direct {p2, p1}, Lcom/sigmob/sdk/mraid/c;-><init>(Ljava/lang/String;)V

    throw p2
.end method

.method static synthetic d(Lcom/sigmob/sdk/mraid/b;)Lcom/sigmob/sdk/base/common/aj;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/mraid/b;->h:Lcom/sigmob/sdk/base/common/aj;

    return-object p0
.end method

.method static synthetic e(Lcom/sigmob/sdk/mraid/b;)Lcom/sigmob/sdk/mraid/o;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/mraid/b;->g:Lcom/sigmob/sdk/mraid/o;

    return-object p0
.end method

.method private f(Ljava/lang/String;)I
    .locals 3
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/sigmob/sdk/mraid/c;
        }
    .end annotation

    const/16 v0, 0xa

    :try_start_0
    invoke-static {p1, v0}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;I)I

    move-result p1
    :try_end_0
    .catch Ljava/lang/NumberFormatException; {:try_start_0 .. :try_end_0} :catch_0

    return p1

    :catch_0
    new-instance v0, Lcom/sigmob/sdk/mraid/c;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "Invalid numeric parameter: "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-direct {v0, p1}, Lcom/sigmob/sdk/mraid/c;-><init>(Ljava/lang/String;)V

    throw v0
.end method

.method private g(Ljava/lang/String;)Lcom/sigmob/sdk/mraid/j;
    .locals 3
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/sigmob/sdk/mraid/c;
        }
    .end annotation

    const-string v0, "portrait"

    invoke-virtual {v0, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    sget-object p1, Lcom/sigmob/sdk/mraid/j;->a:Lcom/sigmob/sdk/mraid/j;

    return-object p1

    :cond_0
    const-string v0, "landscape"

    invoke-virtual {v0, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    sget-object p1, Lcom/sigmob/sdk/mraid/j;->b:Lcom/sigmob/sdk/mraid/j;

    return-object p1

    :cond_1
    const-string v0, "none"

    invoke-virtual {v0, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_2

    sget-object p1, Lcom/sigmob/sdk/mraid/j;->c:Lcom/sigmob/sdk/mraid/j;

    return-object p1

    :cond_2
    new-instance v0, Lcom/sigmob/sdk/mraid/c;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "Invalid orientation: "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-direct {v0, p1}, Lcom/sigmob/sdk/mraid/c;-><init>(Ljava/lang/String;)V

    throw v0
.end method

.method private h(Ljava/lang/String;)Z
    .locals 3
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/sigmob/sdk/mraid/c;
        }
    .end annotation

    const-string v0, "true"

    invoke-virtual {v0, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 p1, 0x1

    return p1

    :cond_0
    const-string v0, "false"

    invoke-virtual {v0, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    const/4 p1, 0x0

    return p1

    :cond_1
    new-instance v0, Lcom/sigmob/sdk/mraid/c;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "Invalid boolean parameter: "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-direct {v0, p1}, Lcom/sigmob/sdk/mraid/c;-><init>(Ljava/lang/String;)V

    throw v0
.end method

.method private i(Ljava/lang/String;)Ljava/net/URI;
    .locals 3
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/sigmob/sdk/mraid/c;
        }
    .end annotation

    if-eqz p1, :cond_0

    :try_start_0
    new-instance v0, Ljava/net/URI;

    invoke-direct {v0, p1}, Ljava/net/URI;-><init>(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/net/URISyntaxException; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    :catch_0
    new-instance v0, Lcom/sigmob/sdk/mraid/c;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "Invalid URL parameter: "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-direct {v0, p1}, Lcom/sigmob/sdk/mraid/c;-><init>(Ljava/lang/String;)V

    throw v0

    :cond_0
    new-instance p1, Lcom/sigmob/sdk/mraid/c;

    const-string v0, "Parameter cannot be null"

    invoke-direct {p1, v0}, Lcom/sigmob/sdk/mraid/c;-><init>(Ljava/lang/String;)V

    throw p1
.end method

.method private o()V
    .locals 1

    iget-boolean v0, p0, Lcom/sigmob/sdk/mraid/b;->i:Z

    if-eqz v0, :cond_0

    return-void

    :cond_0
    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/sigmob/sdk/mraid/b;->i:Z

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/b;->f:Lcom/sigmob/sdk/mraid/b$b;

    if-eqz v0, :cond_1

    invoke-interface {v0}, Lcom/sigmob/sdk/mraid/b$b;->a()V

    :cond_1
    return-void
.end method


# virtual methods
.method public a()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/b;->e:Ljava/lang/String;

    return-object v0
.end method

.method a(I)V
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "sigmob.notifyApkDownloadProcessEvent("

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p1, ");"

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/mraid/b;->c(Ljava/lang/String;)V

    return-void
.end method

.method public a(Landroid/content/Context;Ljava/lang/String;)V
    .locals 6

    iget-object p1, p0, Lcom/sigmob/sdk/mraid/b;->g:Lcom/sigmob/sdk/mraid/o;

    if-nez p1, :cond_0

    const-string p1, "MRAID bridge called setContentHtml before WebView was attached"

    invoke-static {p1}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    return-void

    :cond_0
    new-instance v0, Lcom/sigmob/sdk/mraid/b$a;

    invoke-direct {v0, p0}, Lcom/sigmob/sdk/mraid/b$a;-><init>(Lcom/sigmob/sdk/mraid/b;)V

    const-string v1, "sigandroid"

    invoke-virtual {p1, v0, v1}, Lcom/sigmob/sdk/mraid/o;->addJavascriptInterface(Ljava/lang/Object;Ljava/lang/String;)V

    const/4 p1, 0x0

    iput-boolean p1, p0, Lcom/sigmob/sdk/mraid/b;->i:Z

    invoke-static {p2}, Lcom/czhj/sdk/common/utils/Md5Util;->md5(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, ".html"

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p2, p1}, Lcom/sigmob/sdk/base/utils/b;->a(Ljava/lang/String;Ljava/lang/String;)Ljava/io/File;

    move-result-object p1

    if-eqz p1, :cond_1

    invoke-virtual {p1}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    iget-object p2, p0, Lcom/sigmob/sdk/mraid/b;->g:Lcom/sigmob/sdk/mraid/o;

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "file://"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p2, p1}, Lcom/sigmob/sdk/mraid/o;->loadUrl(Ljava/lang/String;)V

    goto :goto_0

    :cond_1
    iget-object v0, p0, Lcom/sigmob/sdk/mraid/b;->g:Lcom/sigmob/sdk/mraid/o;

    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Lcom/czhj/sdk/common/network/Networking;->getBaseUrlScheme()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "://localhost/"

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const/4 v5, 0x0

    const-string v3, "text/html"

    const-string v4, "UTF-8"

    move-object v2, p2

    invoke-virtual/range {v0 .. v5}, Lcom/sigmob/sdk/mraid/o;->loadDataWithBaseURL(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public a(Landroid/location/Location;)V
    .locals 3

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "mraidbridge.setLocation("

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Landroid/location/Location;->getLatitude()D

    move-result-wide v1

    invoke-virtual {v0, v1, v2}, Ljava/lang/StringBuilder;->append(D)Ljava/lang/StringBuilder;

    const-string v1, ","

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Landroid/location/Location;->getLongitude()D

    move-result-wide v1

    invoke-virtual {v0, v1, v2}, Ljava/lang/StringBuilder;->append(D)Ljava/lang/StringBuilder;

    const-string v1, ",\""

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Landroid/location/Location;->getProvider()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, "\");"

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/mraid/b;->c(Ljava/lang/String;)V

    return-void
.end method

.method a(Landroid/webkit/RenderProcessGoneDetail;)V
    .locals 2

    if-eqz p1, :cond_0

    invoke-virtual {p1}, Landroid/webkit/RenderProcessGoneDetail;->didCrash()Z

    move-result p1

    if-eqz p1, :cond_0

    sget-object p1, Lcom/sigmob/windad/WindAdError;->RENDER_PROCESS_GONE_WITH_CRASH:Lcom/sigmob/windad/WindAdError;

    goto :goto_0

    :cond_0
    sget-object p1, Lcom/sigmob/windad/WindAdError;->RENDER_PROCESS_GONE_UNSPECIFIED:Lcom/sigmob/windad/WindAdError;

    :goto_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "handleRenderProcessGone "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/sigmob/windad/WindAdError;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    invoke-virtual {p0}, Lcom/sigmob/sdk/mraid/b;->b()V

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/b;->f:Lcom/sigmob/sdk/mraid/b$b;

    if-eqz v0, :cond_1

    invoke-interface {v0, p1}, Lcom/sigmob/sdk/mraid/b$b;->a(Lcom/sigmob/windad/WindAdError;)V

    :cond_1
    return-void
.end method

.method a(Landroid/webkit/ValueCallback;)V
    .locals 1

    const-string v0, "mraidbridge.getPlayProgress();"

    invoke-virtual {p0, v0, p1}, Lcom/sigmob/sdk/mraid/b;->a(Ljava/lang/String;Landroid/webkit/ValueCallback;)V

    return-void
.end method

.method a(Lcom/sigmob/sdk/base/models/AppInfo;)V
    .locals 3

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "sigmob.fireChangeEvent({"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/AppInfo;->toString()Ljava/lang/String;

    move-result-object p1

    const-string v1, "="

    const-string v2, ":"

    invoke-virtual {p1, v1, v2}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, "});"

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/mraid/b;->c(Ljava/lang/String;)V

    return-void
.end method

.method a(Lcom/sigmob/sdk/base/models/CurrentAppOrientation;)V
    .locals 3

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "mraidbridge.fireChangeEvent({"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/CurrentAppOrientation;->toString()Ljava/lang/String;

    move-result-object p1

    const-string v1, "="

    const-string v2, ":"

    invoke-virtual {p1, v1, v2}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, "});"

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/mraid/b;->c(Ljava/lang/String;)V

    return-void
.end method

.method a(Lcom/sigmob/sdk/base/models/ExposureChange;)V
    .locals 3

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "mraidbridge.fireChangeEvent({"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/ExposureChange;->toString()Ljava/lang/String;

    move-result-object p1

    const-string v1, "="

    const-string v2, ":"

    invoke-virtual {p1, v1, v2}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, "});"

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/mraid/b;->c(Ljava/lang/String;)V

    return-void
.end method

.method a(Lcom/sigmob/sdk/base/models/MraidEnv;)V
    .locals 2

    const-string v0, "env"

    const/4 v1, 0x1

    invoke-static {p1, v0, v1}, Lcom/czhj/sdk/common/json/JSONSerializer;->Serialize(Ljava/lang/Object;Ljava/lang/String;Z)Ljava/lang/String;

    move-result-object p1

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "mraidbridge.fireChangeEvent("

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, ");"

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/mraid/b;->c(Ljava/lang/String;)V

    return-void
.end method

.method a(Lcom/sigmob/sdk/base/models/PlacementType;)V
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "mraidbridge.setPlacementType("

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/PlacementType;->toJavascriptString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lorg/json/JSONObject;->quote(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, ")"

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/mraid/b;->c(Ljava/lang/String;)V

    return-void
.end method

.method a(Lcom/sigmob/sdk/base/models/VideoItem;)V
    .locals 2

    const-string v0, "video"

    const/4 v1, 0x0

    invoke-static {p1, v0, v1}, Lcom/czhj/sdk/common/json/JSONSerializer;->Serialize(Ljava/lang/Object;Ljava/lang/String;Z)Ljava/lang/String;

    move-result-object p1

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "sigmob.fireChangeEvent("

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, ");"

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/mraid/b;->c(Ljava/lang/String;)V

    return-void
.end method

.method a(Lcom/sigmob/sdk/base/models/ViewState;)V
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "mraidbridge.setState("

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/ViewState;->toJavascriptString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lorg/json/JSONObject;->quote(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, ")"

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/mraid/b;->c(Ljava/lang/String;)V

    return-void
.end method

.method a(Lcom/sigmob/sdk/base/models/rtb/Ad;)V
    .locals 2

    const-string v0, "ad"

    const/4 v1, 0x1

    invoke-static {p1, v0, v1}, Lcom/czhj/sdk/common/json/JSONSerializer;->Serialize(Ljava/lang/Object;Ljava/lang/String;Z)Ljava/lang/String;

    move-result-object p1

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "sigmob.fireChangeEvent("

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, ");"

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/mraid/b;->c(Ljava/lang/String;)V

    return-void
.end method

.method a(Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;)V
    .locals 2

    const-string v0, "material"

    const/4 v1, 0x1

    invoke-static {p1, v0, v1}, Lcom/czhj/sdk/common/json/JSONSerializer;->Serialize(Ljava/lang/Object;Ljava/lang/String;Z)Ljava/lang/String;

    move-result-object p1

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "sigmob.fireChangeEvent("

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, ");"

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/mraid/b;->c(Ljava/lang/String;)V

    return-void
.end method

.method a(Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;)V
    .locals 2

    const-string v0, "rvSetting"

    const/4 v1, 0x0

    invoke-static {p1, v0, v1}, Lcom/czhj/sdk/common/json/JSONSerializer;->Serialize(Ljava/lang/Object;Ljava/lang/String;Z)Ljava/lang/String;

    move-result-object p1

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "sigmob.fireChangeEvent("

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, ");"

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/mraid/b;->c(Ljava/lang/String;)V

    return-void
.end method

.method a(Lcom/sigmob/sdk/mraid/b$b;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/mraid/b;->f:Lcom/sigmob/sdk/mraid/b$b;

    return-void
.end method

.method a(Lcom/sigmob/sdk/mraid/b$c;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/mraid/b;->k:Lcom/sigmob/sdk/mraid/b$c;

    return-void
.end method

.method a(Lcom/sigmob/sdk/mraid/g;Ljava/util/Map;)V
    .locals 16
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/sigmob/sdk/mraid/g;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/sigmob/sdk/mraid/c;
        }
    .end annotation

    move-object/from16 v0, p0

    move-object/from16 v1, p2

    iget-object v2, v0, Lcom/sigmob/sdk/mraid/b;->f:Lcom/sigmob/sdk/mraid/b$b;

    if-eqz v2, :cond_1

    iget-object v2, v0, Lcom/sigmob/sdk/mraid/b;->g:Lcom/sigmob/sdk/mraid/o;

    if-eqz v2, :cond_0

    sget-object v2, Lcom/sigmob/sdk/mraid/b$6;->a:[I

    invoke-virtual/range {p1 .. p1}, Lcom/sigmob/sdk/mraid/g;->ordinal()I

    move-result v3

    aget v2, v2, v3

    const-string v3, "event"

    const-string v4, "uri"

    const-string v5, "shouldUseCustomClose"

    const-string v6, "url"

    const/4 v7, 0x1

    const/4 v8, 0x0

    packed-switch v2, :pswitch_data_0

    goto/16 :goto_0

    :pswitch_0
    new-instance v1, Lcom/sigmob/sdk/mraid/c;

    const-string v2, "Unspecified MRAID Javascript command"

    invoke-direct {v1, v2}, Lcom/sigmob/sdk/mraid/c;-><init>(Ljava/lang/String;)V

    throw v1

    :pswitch_1
    invoke-interface {v1, v3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    iget-object v3, v0, Lcom/sigmob/sdk/mraid/b;->f:Lcom/sigmob/sdk/mraid/b$b;

    invoke-interface {v3, v2, v1}, Lcom/sigmob/sdk/mraid/b$b;->b(Ljava/lang/String;Ljava/util/Map;)V

    goto/16 :goto_0

    :pswitch_2
    invoke-interface {v1, v3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    iget-object v3, v0, Lcom/sigmob/sdk/mraid/b;->f:Lcom/sigmob/sdk/mraid/b$b;

    invoke-interface {v3, v2, v1}, Lcom/sigmob/sdk/mraid/b$b;->a(Ljava/lang/String;Ljava/util/Map;)V

    goto/16 :goto_0

    :pswitch_3
    iget-object v2, v0, Lcom/sigmob/sdk/mraid/b;->d:Lcom/sigmob/sdk/mraid/h;

    iget-object v3, v0, Lcom/sigmob/sdk/mraid/b;->g:Lcom/sigmob/sdk/mraid/o;

    invoke-virtual {v3}, Lcom/sigmob/sdk/mraid/o;->getContext()Landroid/content/Context;

    move-result-object v3

    invoke-virtual {v2, v3, v1}, Lcom/sigmob/sdk/mraid/h;->a(Landroid/content/Context;Ljava/util/Map;)V

    goto/16 :goto_0

    :pswitch_4
    invoke-interface {v1, v4}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    invoke-direct {v0, v1}, Lcom/sigmob/sdk/mraid/b;->i(Ljava/lang/String;)Ljava/net/URI;

    move-result-object v1

    iget-object v2, v0, Lcom/sigmob/sdk/mraid/b;->d:Lcom/sigmob/sdk/mraid/h;

    iget-object v3, v0, Lcom/sigmob/sdk/mraid/b;->g:Lcom/sigmob/sdk/mraid/o;

    invoke-virtual {v3}, Lcom/sigmob/sdk/mraid/o;->getContext()Landroid/content/Context;

    move-result-object v3

    invoke-virtual {v1}, Ljava/net/URI;->toString()Ljava/lang/String;

    move-result-object v1

    new-instance v4, Lcom/sigmob/sdk/mraid/b$5;

    move-object/from16 v5, p1

    invoke-direct {v4, v0, v5}, Lcom/sigmob/sdk/mraid/b$5;-><init>(Lcom/sigmob/sdk/mraid/b;Lcom/sigmob/sdk/mraid/g;)V

    invoke-virtual {v2, v3, v1, v4}, Lcom/sigmob/sdk/mraid/h;->a(Landroid/content/Context;Ljava/lang/String;Lcom/sigmob/sdk/mraid/h$a;)V

    goto/16 :goto_0

    :pswitch_5
    invoke-interface {v1, v4}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    invoke-direct {v0, v1}, Lcom/sigmob/sdk/mraid/b;->i(Ljava/lang/String;)Ljava/net/URI;

    move-result-object v1

    iget-object v2, v0, Lcom/sigmob/sdk/mraid/b;->f:Lcom/sigmob/sdk/mraid/b$b;

    invoke-interface {v2, v1}, Lcom/sigmob/sdk/mraid/b$b;->a(Ljava/net/URI;)V

    goto/16 :goto_0

    :pswitch_6
    const-string v2, "allowOrientationChange"

    invoke-interface {v1, v2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    invoke-direct {v0, v2}, Lcom/sigmob/sdk/mraid/b;->h(Ljava/lang/String;)Z

    move-result v2

    const-string v3, "forceOrientation"

    invoke-interface {v1, v3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    invoke-direct {v0, v1}, Lcom/sigmob/sdk/mraid/b;->g(Ljava/lang/String;)Lcom/sigmob/sdk/mraid/j;

    move-result-object v1

    iget-object v3, v0, Lcom/sigmob/sdk/mraid/b;->f:Lcom/sigmob/sdk/mraid/b$b;

    invoke-interface {v3, v2, v1}, Lcom/sigmob/sdk/mraid/b$b;->a(ZLcom/sigmob/sdk/mraid/j;)V

    goto/16 :goto_0

    :pswitch_7
    invoke-interface {v1, v6}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    const-string v3, "https://m.sigmob.com"

    invoke-direct {v0, v2, v3}, Lcom/sigmob/sdk/mraid/b;->c(Ljava/lang/String;Ljava/lang/String;)Ljava/net/URI;

    move-result-object v2

    const-string v3, "ext"

    invoke-interface {v1, v3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    invoke-static {v1}, Lcom/sigmob/sdk/mraid/b;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    iget-object v3, v0, Lcom/sigmob/sdk/mraid/b;->f:Lcom/sigmob/sdk/mraid/b$b;

    invoke-interface {v3, v2, v7, v1}, Lcom/sigmob/sdk/mraid/b$b;->a(Ljava/net/URI;ILjava/lang/String;)V

    goto/16 :goto_0

    :pswitch_8
    invoke-interface {v1, v5}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    invoke-direct {v0, v1, v8}, Lcom/sigmob/sdk/mraid/b;->a(Ljava/lang/String;Z)Z

    move-result v1

    iget-object v2, v0, Lcom/sigmob/sdk/mraid/b;->f:Lcom/sigmob/sdk/mraid/b$b;

    invoke-interface {v2, v1}, Lcom/sigmob/sdk/mraid/b$b;->b(Z)V

    goto/16 :goto_0

    :pswitch_9
    invoke-interface {v1, v6}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    const/4 v3, 0x0

    invoke-direct {v0, v2, v3}, Lcom/sigmob/sdk/mraid/b;->a(Ljava/lang/String;Ljava/net/URI;)Ljava/net/URI;

    move-result-object v2

    invoke-interface {v1, v5}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    invoke-direct {v0, v1, v8}, Lcom/sigmob/sdk/mraid/b;->a(Ljava/lang/String;Z)Z

    move-result v1

    iget-object v3, v0, Lcom/sigmob/sdk/mraid/b;->f:Lcom/sigmob/sdk/mraid/b$b;

    invoke-interface {v3, v2, v1}, Lcom/sigmob/sdk/mraid/b$b;->a(Ljava/net/URI;Z)V

    goto/16 :goto_0

    :pswitch_a
    const-string v2, "width"

    invoke-interface {v1, v2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    invoke-direct {v0, v2}, Lcom/sigmob/sdk/mraid/b;->f(Ljava/lang/String;)I

    move-result v2

    const v3, 0x186a0

    invoke-direct {v0, v2, v8, v3}, Lcom/sigmob/sdk/mraid/b;->a(III)I

    move-result v10

    const-string v2, "height"

    invoke-interface {v1, v2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    invoke-direct {v0, v2}, Lcom/sigmob/sdk/mraid/b;->f(Ljava/lang/String;)I

    move-result v2

    invoke-direct {v0, v2, v8, v3}, Lcom/sigmob/sdk/mraid/b;->a(III)I

    move-result v11

    const-string v2, "offsetX"

    invoke-interface {v1, v2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    invoke-direct {v0, v2}, Lcom/sigmob/sdk/mraid/b;->f(Ljava/lang/String;)I

    move-result v2

    const v4, -0x186a0

    invoke-direct {v0, v2, v4, v3}, Lcom/sigmob/sdk/mraid/b;->a(III)I

    move-result v12

    const-string v2, "offsetY"

    invoke-interface {v1, v2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    invoke-direct {v0, v2}, Lcom/sigmob/sdk/mraid/b;->f(Ljava/lang/String;)I

    move-result v2

    invoke-direct {v0, v2, v4, v3}, Lcom/sigmob/sdk/mraid/b;->a(III)I

    move-result v13

    const-string v2, "customClosePosition"

    invoke-interface {v1, v2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    sget-object v3, Lcom/sigmob/sdk/mraid/a$a;->c:Lcom/sigmob/sdk/mraid/a$a;

    invoke-direct {v0, v2, v3}, Lcom/sigmob/sdk/mraid/b;->a(Ljava/lang/String;Lcom/sigmob/sdk/mraid/a$a;)Lcom/sigmob/sdk/mraid/a$a;

    move-result-object v14

    const-string v2, "allowOffscreen"

    invoke-interface {v1, v2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    invoke-direct {v0, v1, v7}, Lcom/sigmob/sdk/mraid/b;->a(Ljava/lang/String;Z)Z

    move-result v15

    iget-object v9, v0, Lcom/sigmob/sdk/mraid/b;->f:Lcom/sigmob/sdk/mraid/b$b;

    invoke-interface/range {v9 .. v15}, Lcom/sigmob/sdk/mraid/b$b;->a(IIIILcom/sigmob/sdk/mraid/a$a;Z)V

    goto :goto_0

    :pswitch_b
    iget-object v1, v0, Lcom/sigmob/sdk/mraid/b;->f:Lcom/sigmob/sdk/mraid/b$b;

    invoke-interface {v1}, Lcom/sigmob/sdk/mraid/b$b;->f()V

    goto :goto_0

    :pswitch_c
    iget-object v1, v0, Lcom/sigmob/sdk/mraid/b;->f:Lcom/sigmob/sdk/mraid/b$b;

    invoke-interface {v1}, Lcom/sigmob/sdk/mraid/b$b;->e()V

    goto :goto_0

    :pswitch_d
    iget-object v1, v0, Lcom/sigmob/sdk/mraid/b;->f:Lcom/sigmob/sdk/mraid/b$b;

    invoke-interface {v1}, Lcom/sigmob/sdk/mraid/b$b;->d()V

    :goto_0
    return-void

    :cond_0
    new-instance v1, Lcom/sigmob/sdk/mraid/c;

    const-string v2, "The current WebView is being destroyed"

    invoke-direct {v1, v2}, Lcom/sigmob/sdk/mraid/c;-><init>(Ljava/lang/String;)V

    throw v1

    :cond_1
    new-instance v1, Lcom/sigmob/sdk/mraid/c;

    const-string v2, "Invalid state to execute this command"

    invoke-direct {v1, v2}, Lcom/sigmob/sdk/mraid/c;-><init>(Ljava/lang/String;)V

    throw v1

    :pswitch_data_0
    .packed-switch 0x1
        :pswitch_d
        :pswitch_c
        :pswitch_b
        :pswitch_a
        :pswitch_9
        :pswitch_8
        :pswitch_7
        :pswitch_6
        :pswitch_5
        :pswitch_4
        :pswitch_3
        :pswitch_2
        :pswitch_1
        :pswitch_0
    .end packed-switch
.end method

.method public a(Lcom/sigmob/sdk/mraid/k;)V
    .locals 3

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "mraidbridge.setScreenSize("

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/sigmob/sdk/mraid/k;->c()Landroid/graphics/Rect;

    move-result-object v1

    invoke-direct {p0, v1}, Lcom/sigmob/sdk/mraid/b;->b(Landroid/graphics/Rect;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, ");mraidbridge.setMaxSize("

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/sigmob/sdk/mraid/k;->e()Landroid/graphics/Rect;

    move-result-object v1

    invoke-direct {p0, v1}, Lcom/sigmob/sdk/mraid/b;->b(Landroid/graphics/Rect;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, ");mraidbridge.setCurrentPosition("

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/sigmob/sdk/mraid/k;->g()Landroid/graphics/Rect;

    move-result-object v1

    invoke-direct {p0, v1}, Lcom/sigmob/sdk/mraid/b;->a(Landroid/graphics/Rect;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, ");mraidbridge.setDefaultPosition("

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/sigmob/sdk/mraid/k;->i()Landroid/graphics/Rect;

    move-result-object v1

    invoke-direct {p0, v1}, Lcom/sigmob/sdk/mraid/b;->a(Landroid/graphics/Rect;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, ")"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/sigmob/sdk/mraid/b;->c(Ljava/lang/String;)V

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "mraidbridge.notifySizeChangeEvent("

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/sigmob/sdk/mraid/k;->g()Landroid/graphics/Rect;

    move-result-object p1

    invoke-direct {p0, p1}, Lcom/sigmob/sdk/mraid/b;->b(Landroid/graphics/Rect;)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/mraid/b;->c(Ljava/lang/String;)V

    return-void
.end method

.method public a(Lcom/sigmob/sdk/mraid/o;)V
    .locals 6

    iput-object p1, p0, Lcom/sigmob/sdk/mraid/b;->g:Lcom/sigmob/sdk/mraid/o;

    const/4 v0, 0x1

    const/4 v1, 0x2

    :try_start_0
    new-instance v2, Lcom/czhj/sdk/common/utils/ReflectionUtil$MethodBuilder;

    invoke-virtual {p1}, Lcom/sigmob/sdk/mraid/o;->getSettings()Landroid/webkit/WebSettings;

    move-result-object v3

    new-instance v4, Ljava/lang/String;

    const-string v5, "c2V0SmF2YVNjcmlwdEVuYWJsZWQ="

    invoke-static {v5, v1}, Landroid/util/Base64;->decode(Ljava/lang/String;I)[B

    move-result-object v5

    invoke-direct {v4, v5}, Ljava/lang/String;-><init>([B)V

    invoke-direct {v2, v3, v4}, Lcom/czhj/sdk/common/utils/ReflectionUtil$MethodBuilder;-><init>(Ljava/lang/Object;Ljava/lang/String;)V

    sget-object v3, Ljava/lang/Boolean;->TYPE:Ljava/lang/Class;

    invoke-static {v0}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v4

    invoke-virtual {v2, v3, v4}, Lcom/czhj/sdk/common/utils/ReflectionUtil$MethodBuilder;->addParam(Ljava/lang/Class;Ljava/lang/Object;)Lcom/czhj/sdk/common/utils/ReflectionUtil$MethodBuilder;

    invoke-virtual {v2}, Lcom/czhj/sdk/common/utils/ReflectionUtil$MethodBuilder;->execute()Ljava/lang/Object;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v2

    invoke-virtual {v2}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    :try_start_1
    new-instance v2, Lcom/czhj/sdk/common/utils/ReflectionUtil$MethodBuilder;

    invoke-virtual {p1}, Lcom/sigmob/sdk/mraid/o;->getSettings()Landroid/webkit/WebSettings;

    move-result-object v3

    new-instance v4, Ljava/lang/String;

    const-string v5, "c2V0QWxsb3dGaWxlQWNjZXNz"

    invoke-static {v5, v1}, Landroid/util/Base64;->decode(Ljava/lang/String;I)[B

    move-result-object v1

    invoke-direct {v4, v1}, Ljava/lang/String;-><init>([B)V

    invoke-direct {v2, v3, v4}, Lcom/czhj/sdk/common/utils/ReflectionUtil$MethodBuilder;-><init>(Ljava/lang/Object;Ljava/lang/String;)V

    sget-object v1, Ljava/lang/Boolean;->TYPE:Ljava/lang/Class;

    invoke-static {v0}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v0

    invoke-virtual {v2, v1, v0}, Lcom/czhj/sdk/common/utils/ReflectionUtil$MethodBuilder;->addParam(Ljava/lang/Class;Ljava/lang/Object;)Lcom/czhj/sdk/common/utils/ReflectionUtil$MethodBuilder;

    invoke-virtual {v2}, Lcom/czhj/sdk/common/utils/ReflectionUtil$MethodBuilder;->execute()Ljava/lang/Object;
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    goto :goto_1

    :catch_1
    move-exception v0

    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :goto_1
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x11

    const/4 v2, 0x0

    if-lt v0, v1, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/b;->c:Lcom/sigmob/sdk/base/models/PlacementType;

    sget-object v1, Lcom/sigmob/sdk/base/models/PlacementType;->INTERSTITIAL:Lcom/sigmob/sdk/base/models/PlacementType;

    if-ne v0, v1, :cond_0

    invoke-virtual {p1}, Lcom/sigmob/sdk/mraid/o;->getSettings()Landroid/webkit/WebSettings;

    move-result-object p1

    invoke-virtual {p1, v2}, Landroid/webkit/WebSettings;->setMediaPlaybackRequiresUserGesture(Z)V

    :cond_0
    iget-object p1, p0, Lcom/sigmob/sdk/mraid/b;->g:Lcom/sigmob/sdk/mraid/o;

    invoke-virtual {p1, v2}, Lcom/sigmob/sdk/mraid/o;->setScrollContainer(Z)V

    iget-object p1, p0, Lcom/sigmob/sdk/mraid/b;->g:Lcom/sigmob/sdk/mraid/o;

    invoke-virtual {p1, v2}, Lcom/sigmob/sdk/mraid/o;->setVerticalScrollBarEnabled(Z)V

    iget-object p1, p0, Lcom/sigmob/sdk/mraid/b;->g:Lcom/sigmob/sdk/mraid/o;

    invoke-virtual {p1, v2}, Lcom/sigmob/sdk/mraid/o;->setHorizontalScrollBarEnabled(Z)V

    iget-object p1, p0, Lcom/sigmob/sdk/mraid/b;->g:Lcom/sigmob/sdk/mraid/o;

    invoke-virtual {p1, v2}, Lcom/sigmob/sdk/mraid/o;->setBackgroundColor(I)V

    iget-object p1, p0, Lcom/sigmob/sdk/mraid/b;->g:Lcom/sigmob/sdk/mraid/o;

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/b;->b:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {p1, v0}, Lcom/sigmob/sdk/mraid/o;->setAdUnit(Lcom/sigmob/sdk/base/models/BaseAdUnit;)V

    iget-object p1, p0, Lcom/sigmob/sdk/mraid/b;->g:Lcom/sigmob/sdk/mraid/o;

    const/4 v0, 0x0

    invoke-virtual {p1, v0}, Lcom/sigmob/sdk/mraid/o;->a(Lcom/sigmob/sdk/base/common/m$a;)V

    iget-object p1, p0, Lcom/sigmob/sdk/mraid/b;->g:Lcom/sigmob/sdk/mraid/o;

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/b;->j:Landroid/webkit/WebViewClient;

    invoke-virtual {p1, v0}, Lcom/sigmob/sdk/mraid/o;->setWebViewClient(Landroid/webkit/WebViewClient;)V

    iget-object p1, p0, Lcom/sigmob/sdk/mraid/b;->g:Lcom/sigmob/sdk/mraid/o;

    new-instance v0, Lcom/sigmob/sdk/mraid/b$2;

    invoke-direct {v0, p0}, Lcom/sigmob/sdk/mraid/b$2;-><init>(Lcom/sigmob/sdk/mraid/b;)V

    invoke-virtual {p1, v0}, Lcom/sigmob/sdk/mraid/o;->setWebChromeClient(Landroid/webkit/WebChromeClient;)V

    new-instance p1, Lcom/sigmob/sdk/base/common/aj;

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/b;->g:Lcom/sigmob/sdk/mraid/o;

    invoke-virtual {v0}, Lcom/sigmob/sdk/mraid/o;->getContext()Landroid/content/Context;

    move-result-object v0

    iget-object v1, p0, Lcom/sigmob/sdk/mraid/b;->g:Lcom/sigmob/sdk/mraid/o;

    iget-object v2, p0, Lcom/sigmob/sdk/mraid/b;->b:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-direct {p1, v0, v1, v2}, Lcom/sigmob/sdk/base/common/aj;-><init>(Landroid/content/Context;Landroid/view/View;Lcom/sigmob/sdk/base/models/BaseAdUnit;)V

    iput-object p1, p0, Lcom/sigmob/sdk/mraid/b;->h:Lcom/sigmob/sdk/base/common/aj;

    iget-object p1, p0, Lcom/sigmob/sdk/mraid/b;->g:Lcom/sigmob/sdk/mraid/o;

    new-instance v0, Lcom/sigmob/sdk/mraid/b$3;

    invoke-direct {v0, p0}, Lcom/sigmob/sdk/mraid/b$3;-><init>(Lcom/sigmob/sdk/mraid/b;)V

    invoke-virtual {p1, v0}, Lcom/sigmob/sdk/mraid/o;->setOnTouchListener(Landroid/view/View$OnTouchListener;)V

    iget-object p1, p0, Lcom/sigmob/sdk/mraid/b;->g:Lcom/sigmob/sdk/mraid/o;

    new-instance v0, Lcom/sigmob/sdk/mraid/b$4;

    invoke-direct {v0, p0}, Lcom/sigmob/sdk/mraid/b$4;-><init>(Lcom/sigmob/sdk/mraid/b;)V

    invoke-virtual {p1, v0}, Lcom/sigmob/sdk/mraid/o;->setVisibilityChangedListener(Lcom/sigmob/sdk/mraid/o$a;)V

    return-void
.end method

.method public a(Ljava/lang/String;I)V
    .locals 3

    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    :try_start_0
    const-string v1, "uniqueId"

    invoke-virtual {v0, v1, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string p1, "currentTime"

    int-to-float p2, p2

    const/high16 v1, 0x447a0000    # 1000.0f

    div-float/2addr p2, v1

    float-to-double v1, p2

    invoke-virtual {v0, p1, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;D)Lorg/json/JSONObject;
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    invoke-virtual {p1}, Lorg/json/JSONException;->printStackTrace()V

    :goto_0
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string p2, "mraidbridge.setvdPlayToEnd("

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string p2, ")"

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/mraid/b;->c(Ljava/lang/String;)V

    return-void
.end method

.method public a(Ljava/lang/String;II)V
    .locals 4

    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    :try_start_0
    const-string v1, "uniqueId"

    invoke-virtual {v0, v1, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string p1, "currentTime"

    int-to-float p2, p2

    const/high16 v1, 0x447a0000    # 1000.0f

    div-float/2addr p2, v1

    float-to-double v2, p2

    invoke-virtual {v0, p1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;D)Lorg/json/JSONObject;

    const-string p1, "duration"

    int-to-float p2, p3

    div-float/2addr p2, v1

    float-to-double p2, p2

    invoke-virtual {v0, p1, p2, p3}, Lorg/json/JSONObject;->put(Ljava/lang/String;D)Lorg/json/JSONObject;
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    invoke-virtual {p1}, Lorg/json/JSONException;->printStackTrace()V

    :goto_0
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string p2, "mraidbridge.setvdPlayCurrentTime("

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string p2, ")"

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/mraid/b;->c(Ljava/lang/String;)V

    return-void
.end method

.method a(Ljava/lang/String;III)V
    .locals 3

    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    :try_start_0
    const-string v1, "uniqueId"

    invoke-virtual {v0, v1, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string p1, "duration"

    int-to-float p2, p2

    const/high16 v1, 0x447a0000    # 1000.0f

    div-float/2addr p2, v1

    float-to-double v1, p2

    invoke-virtual {v0, p1, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;D)Lorg/json/JSONObject;

    const-string p1, "width"

    invoke-virtual {v0, p1, p3}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string p1, "height"

    invoke-virtual {v0, p1, p4}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    invoke-virtual {p1}, Lorg/json/JSONException;->printStackTrace()V

    :goto_0
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string p2, "mraidbridge.setvdReadyToPlay("

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string p2, ")"

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/mraid/b;->c(Ljava/lang/String;)V

    return-void
.end method

.method a(Ljava/lang/String;Landroid/webkit/ValueCallback;)V
    .locals 2

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/b;->g:Lcom/sigmob/sdk/mraid/o;

    if-nez v0, :cond_0

    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "Attempted to inject Javascript into MRAID WebView while was not attached:\n\t"

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    return-void

    :cond_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "Injecting Javascript into MRAID WebView:\n\t"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x13

    if-lt v0, v1, :cond_1

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/b;->g:Lcom/sigmob/sdk/mraid/o;

    invoke-virtual {v0, p1, p2}, Lcom/sigmob/sdk/mraid/o;->evaluateJavascript(Ljava/lang/String;Landroid/webkit/ValueCallback;)V

    goto :goto_0

    :cond_1
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "Injecting Javascript into MRAID WebView:\n\t can\'t support less KITKAT"

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method a(Ljava/lang/String;Ljava/lang/String;)V
    .locals 4

    const/4 v0, 0x4

    new-array v0, v0, [Ljava/lang/Object;

    const/4 v1, 0x0

    aput-object p1, v0, v1

    const/4 v1, 0x1

    aput-object p2, v0, v1

    const/4 v1, 0x2

    aput-object p1, v0, v1

    const/4 v1, 0x3

    aput-object p2, v0, v1

    const-string v1, "%s,%s,%s,%s"

    invoke-static {v1, v0}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/sigmob/sdk/mraid/b;->e:Ljava/lang/String;

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/b;->b:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getMacroCommon()Lcom/sigmob/sdk/base/models/SigMacroCommon;

    move-result-object v0

    instance-of v1, v0, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    if-eqz v1, :cond_0

    check-cast v0, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    const-string v1, "_DOWNX_"

    invoke-virtual {v0, v1, p1}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    const-string v1, "_DOWNY_"

    invoke-virtual {v0, v1, p2}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    const-string v1, "_UPX_"

    invoke-virtual {v0, v1, p1}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    const-string v1, "_UPY_"

    invoke-virtual {v0, v1, p2}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/mraid/b;->b:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getClickCommon()Lcom/sigmob/sdk/base/models/ClickCommon;

    move-result-object v0

    new-instance v1, Lcom/czhj/sdk/common/utils/TouchLocation;

    invoke-static {p1}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v2

    invoke-static {p2}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v3

    invoke-direct {v1, v2, v3}, Lcom/czhj/sdk/common/utils/TouchLocation;-><init>(II)V

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/ClickCommon;->down:Lcom/czhj/sdk/common/utils/TouchLocation;

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/b;->b:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getClickCommon()Lcom/sigmob/sdk/base/models/ClickCommon;

    move-result-object v0

    new-instance v1, Lcom/czhj/sdk/common/utils/TouchLocation;

    invoke-static {p1}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result p1

    invoke-static {p2}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result p2

    invoke-direct {v1, p1, p2}, Lcom/czhj/sdk/common/utils/TouchLocation;-><init>(II)V

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/ClickCommon;->up:Lcom/czhj/sdk/common/utils/TouchLocation;

    return-void
.end method

.method a(Z)V
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "mraidbridge.setIsViewable("

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string p1, ")"

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/mraid/b;->c(Ljava/lang/String;)V

    return-void
.end method

.method a(ZZZZZZZ)V
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "mraidbridge.setSupports("

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string p1, ","

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p3}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p4}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p5}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p6}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p7}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string p1, ")"

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/mraid/b;->c(Ljava/lang/String;)V

    return-void
.end method

.method a(Landroid/webkit/WebView;Ljava/lang/String;)Z
    .locals 5

    const/4 v0, 0x1

    :try_start_0
    new-instance v1, Ljava/net/URI;

    invoke-direct {v1, p2}, Ljava/net/URI;-><init>(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/net/URISyntaxException; {:try_start_0 .. :try_end_0} :catch_1

    invoke-static {p2}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object v1

    invoke-virtual {v1}, Landroid/net/Uri;->getScheme()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1}, Landroid/net/Uri;->getHost()Ljava/lang/String;

    move-result-object v3

    const-string v4, "sigmob"

    invoke-virtual {v4, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v4

    if-eqz v4, :cond_1

    const-string p1, "failLoad"

    invoke-virtual {p1, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/sigmob/sdk/mraid/b;->c:Lcom/sigmob/sdk/base/models/PlacementType;

    sget-object p2, Lcom/sigmob/sdk/base/models/PlacementType;->INLINE:Lcom/sigmob/sdk/base/models/PlacementType;

    if-ne p1, p2, :cond_0

    iget-object p1, p0, Lcom/sigmob/sdk/mraid/b;->f:Lcom/sigmob/sdk/mraid/b$b;

    if-eqz p1, :cond_0

    invoke-interface {p1}, Lcom/sigmob/sdk/mraid/b$b;->c()V

    :cond_0
    return v0

    :cond_1
    const-string v4, "mraid"

    invoke-virtual {v4, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_2

    invoke-static {v3}, Lcom/sigmob/sdk/mraid/g;->a(Ljava/lang/String;)Lcom/sigmob/sdk/mraid/g;

    move-result-object p1

    :try_start_1
    invoke-static {v1}, Lcom/czhj/sdk/common/ClientMetadata;->getQueryParamMap(Landroid/net/Uri;)Ljava/util/Map;

    move-result-object p2

    invoke-virtual {p0, p1, p2}, Lcom/sigmob/sdk/mraid/b;->a(Lcom/sigmob/sdk/mraid/g;Ljava/util/Map;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p2

    invoke-virtual {p2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p2

    invoke-direct {p0, p1, p2}, Lcom/sigmob/sdk/mraid/b;->a(Lcom/sigmob/sdk/mraid/g;Ljava/lang/String;)V

    :goto_0
    invoke-direct {p0, p1}, Lcom/sigmob/sdk/mraid/b;->a(Lcom/sigmob/sdk/mraid/g;)V

    return v0

    :cond_2
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_7

    const-string v1, "http"

    invoke-virtual {p2, v1}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_3

    invoke-virtual {p1, p2}, Landroid/webkit/WebView;->loadUrl(Ljava/lang/String;)V

    goto :goto_4

    :cond_3
    :try_start_2
    iget-object p1, p0, Lcom/sigmob/sdk/mraid/b;->b:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getAdSetting()Lcom/sigmob/sdk/base/models/rtb/AdSetting;

    move-result-object p1

    if-eqz p1, :cond_4

    iget-object p1, p0, Lcom/sigmob/sdk/mraid/b;->b:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getAdSetting()Lcom/sigmob/sdk/base/models/rtb/AdSetting;

    move-result-object p1

    iget-object p1, p1, Lcom/sigmob/sdk/base/models/rtb/AdSetting;->scheme_white_list:Ljava/util/List;

    goto :goto_1

    :cond_4
    const/4 p1, 0x0

    :goto_1
    if-eqz p1, :cond_7

    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v1

    if-lez v1, :cond_7

    const/4 v1, 0x0

    :goto_2
    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v2

    if-ge v1, v2, :cond_7

    invoke-interface {p1, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    invoke-virtual {p2, v2}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v3

    if-nez v3, :cond_6

    const-string v3, "*"

    invoke-virtual {v2, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_5

    goto :goto_3

    :cond_5
    add-int/lit8 v1, v1, 0x1

    goto :goto_2

    :cond_6
    :goto_3
    iget-object p1, p0, Lcom/sigmob/sdk/mraid/b;->g:Lcom/sigmob/sdk/mraid/o;

    invoke-virtual {p1}, Lcom/sigmob/sdk/mraid/o;->getContext()Landroid/content/Context;

    move-result-object p1

    invoke-static {p2}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object p2

    invoke-static {p1, p2}, Lcom/sigmob/sdk/base/common/s;->a(Landroid/content/Context;Landroid/net/Uri;)V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0

    return v0

    :catch_0
    move-exception p1

    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_7
    :goto_4
    return v0

    :catch_1
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "Invalid MRAID URL: "

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    sget-object p1, Lcom/sigmob/sdk/mraid/g;->n:Lcom/sigmob/sdk/mraid/g;

    const-string p2, "Mraid command sent an invalid URL"

    invoke-direct {p0, p1, p2}, Lcom/sigmob/sdk/mraid/b;->a(Lcom/sigmob/sdk/mraid/g;Ljava/lang/String;)V

    return v0
.end method

.method b()V
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/b;->g:Lcom/sigmob/sdk/mraid/o;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/sigmob/sdk/mraid/o;->destroy()V

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/sigmob/sdk/mraid/b;->g:Lcom/sigmob/sdk/mraid/o;

    :cond_0
    return-void
.end method

.method b(Landroid/webkit/ValueCallback;)V
    .locals 1

    const-string v0, "mraidbridge.getAdDuration();"

    invoke-virtual {p0, v0, p1}, Lcom/sigmob/sdk/mraid/b;->a(Ljava/lang/String;Landroid/webkit/ValueCallback;)V

    return-void
.end method

.method public b(Ljava/lang/String;)V
    .locals 3

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/b;->g:Lcom/sigmob/sdk/mraid/o;

    if-nez v0, :cond_0

    const-string p1, "MRAID bridge called setContentHtml while WebView was not attached"

    invoke-static {p1}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    return-void

    :cond_0
    new-instance v1, Lcom/sigmob/sdk/mraid/b$a;

    invoke-direct {v1, p0}, Lcom/sigmob/sdk/mraid/b$a;-><init>(Lcom/sigmob/sdk/mraid/b;)V

    const-string v2, "sigandroid"

    invoke-virtual {v0, v1, v2}, Lcom/sigmob/sdk/mraid/o;->addJavascriptInterface(Ljava/lang/Object;Ljava/lang/String;)V

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/sigmob/sdk/mraid/b;->i:Z

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/b;->g:Lcom/sigmob/sdk/mraid/o;

    invoke-virtual {v0, p1}, Lcom/sigmob/sdk/mraid/o;->loadUrl(Ljava/lang/String;)V

    return-void
.end method

.method public b(Ljava/lang/String;I)V
    .locals 2

    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    :try_start_0
    const-string v1, "uniqueId"

    invoke-virtual {v0, v1, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string p1, "state"

    invoke-virtual {v0, p1, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    invoke-virtual {p1}, Lorg/json/JSONException;->printStackTrace()V

    :goto_0
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string p2, "mraidbridge.setvdLoadStateChanged("

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string p2, ")"

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/mraid/b;->c(Ljava/lang/String;)V

    return-void
.end method

.method public b(Ljava/lang/String;Ljava/lang/String;)V
    .locals 2

    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    :try_start_0
    const-string v1, "uniqueId"

    invoke-virtual {v0, v1, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string p1, "error"

    invoke-virtual {v0, p1, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    invoke-virtual {p1}, Lorg/json/JSONException;->printStackTrace()V

    :goto_0
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string p2, "mraidbridge.setvdPlayError("

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string p2, ")"

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/mraid/b;->c(Ljava/lang/String;)V

    return-void
.end method

.method c()V
    .locals 1

    const-string v0, "sigmob.fireChangeEvent({\"osType\":2});"

    invoke-virtual {p0, v0}, Lcom/sigmob/sdk/mraid/b;->c(Ljava/lang/String;)V

    return-void
.end method

.method c(Ljava/lang/String;)V
    .locals 3

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/b;->g:Lcom/sigmob/sdk/mraid/o;

    if-nez v0, :cond_0

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "Attempted to inject Javascript into MRAID WebView while was not attached:\n\t"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    return-void

    :cond_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "Injecting Javascript into MRAID WebView:\n\t"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x13

    if-lt v0, v1, :cond_1

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/b;->g:Lcom/sigmob/sdk/mraid/o;

    const/4 v1, 0x0

    invoke-virtual {v0, p1, v1}, Lcom/sigmob/sdk/mraid/o;->evaluateJavascript(Ljava/lang/String;Landroid/webkit/ValueCallback;)V

    goto :goto_0

    :cond_1
    iget-object v0, p0, Lcom/sigmob/sdk/mraid/b;->g:Lcom/sigmob/sdk/mraid/o;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "javascript:"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Lcom/sigmob/sdk/mraid/o;->loadUrl(Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public c(Ljava/lang/String;I)V
    .locals 2

    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    :try_start_0
    const-string v1, "uniqueId"

    invoke-virtual {v0, v1, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string p1, "state"

    invoke-virtual {v0, p1, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    invoke-virtual {p1}, Lorg/json/JSONException;->printStackTrace()V

    :goto_0
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string p2, "mraidbridge.setvdPlayStateChanged("

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string p2, ")"

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/mraid/b;->c(Ljava/lang/String;)V

    return-void
.end method

.method d()V
    .locals 1

    const-string v0, "mraidbridge.fireChangeEvent({\"hostSDKVersion\":4.9.0});"

    invoke-virtual {p0, v0}, Lcom/sigmob/sdk/mraid/b;->c(Ljava/lang/String;)V

    return-void
.end method

.method d(Ljava/lang/String;)V
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "mraidbridge.fireVideoSrc(\""

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, "\")"

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/mraid/b;->c(Ljava/lang/String;)V

    return-void
.end method

.method e()V
    .locals 1

    const-string v0, "mraidbridge.notifyReadyEvent();"

    invoke-virtual {p0, v0}, Lcom/sigmob/sdk/mraid/b;->c(Ljava/lang/String;)V

    return-void
.end method

.method e(Ljava/lang/String;)V
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "mraidbridge.nativeCallCompleteV2("

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {p1}, Lorg/json/JSONObject;->quote(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, ")"

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/mraid/b;->c(Ljava/lang/String;)V

    return-void
.end method

.method f()V
    .locals 1

    const-string v0, "sigmob.notifyApkDownloadStartEvent();"

    invoke-virtual {p0, v0}, Lcom/sigmob/sdk/mraid/b;->c(Ljava/lang/String;)V

    return-void
.end method

.method g()V
    .locals 1

    const-string v0, "sigmob.notifyApkDownloadFailEvent();"

    invoke-virtual {p0, v0}, Lcom/sigmob/sdk/mraid/b;->c(Ljava/lang/String;)V

    return-void
.end method

.method h()V
    .locals 1

    const-string v0, "sigmob.notifyApkDownloadEndEvent();"

    invoke-virtual {p0, v0}, Lcom/sigmob/sdk/mraid/b;->c(Ljava/lang/String;)V

    return-void
.end method

.method i()V
    .locals 1

    const-string v0, "sigmob.notifyApkDownloadInstalledEvent();"

    invoke-virtual {p0, v0}, Lcom/sigmob/sdk/mraid/b;->c(Ljava/lang/String;)V

    return-void
.end method

.method j()V
    .locals 1

    const-string v0, "mraidbridge.startAd();"

    invoke-virtual {p0, v0}, Lcom/sigmob/sdk/mraid/b;->c(Ljava/lang/String;)V

    return-void
.end method

.method k()Z
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/b;->h:Lcom/sigmob/sdk/base/common/aj;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/common/aj;->c()Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method l()Z
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/b;->g:Lcom/sigmob/sdk/mraid/o;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/sigmob/sdk/mraid/o;->h()Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method m()Z
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/b;->g:Lcom/sigmob/sdk/mraid/o;

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method n()Z
    .locals 1

    iget-boolean v0, p0, Lcom/sigmob/sdk/mraid/b;->i:Z

    return v0
.end method
