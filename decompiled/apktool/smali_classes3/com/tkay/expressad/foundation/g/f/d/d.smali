.class public Lcom/tkay/expressad/foundation/g/f/d/d;
.super Lcom/tkay/expressad/foundation/g/f/d/e;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/tkay/expressad/foundation/g/f/d/e<",
        "Lorg/json/JSONObject;",
        ">;"
    }
.end annotation


# static fields
.field private static final c:Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 17
    const-class v0, Lcom/tkay/expressad/foundation/g/f/d/d;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/tkay/expressad/foundation/g/f/d/d;->c:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(ILjava/lang/String;Ljava/lang/String;Lcom/tkay/expressad/foundation/g/f/e;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(I",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Lcom/tkay/expressad/foundation/g/f/e<",
            "Lorg/json/JSONObject;",
            ">;)V"
        }
    .end annotation

    .line 20
    invoke-direct {p0, p1, p2, p3, p4}, Lcom/tkay/expressad/foundation/g/f/d/e;-><init>(ILjava/lang/String;Ljava/lang/String;Lcom/tkay/expressad/foundation/g/f/e;)V

    return-void
.end method


# virtual methods
.method protected final a(Lcom/tkay/expressad/foundation/g/f/f/c;)Lcom/tkay/expressad/foundation/g/f/k;
    .locals 4
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/tkay/expressad/foundation/g/f/f/c;",
            ")",
            "Lcom/tkay/expressad/foundation/g/f/k<",
            "Lorg/json/JSONObject;",
            ">;"
        }
    .end annotation

    const/16 v0, 0x8

    .line 26
    :try_start_0
    new-instance v1, Ljava/lang/String;

    iget-object v2, p1, Lcom/tkay/expressad/foundation/g/f/f/c;->b:[B

    iget-object v3, p1, Lcom/tkay/expressad/foundation/g/f/f/c;->d:Ljava/util/List;

    invoke-static {v3}, Lcom/tkay/expressad/foundation/g/f/g/e;->a(Ljava/util/List;)Ljava/lang/String;

    move-result-object v3

    invoke-direct {v1, v2, v3}, Ljava/lang/String;-><init>([BLjava/lang/String;)V

    .line 27
    iget v2, p1, Lcom/tkay/expressad/foundation/g/f/f/c;->a:I

    const/16 v3, 0xcc

    if-ne v2, v3, :cond_0

    .line 28
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V

    invoke-static {v1, p1}, Lcom/tkay/expressad/foundation/g/f/k;->a(Ljava/lang/Object;Lcom/tkay/expressad/foundation/g/f/f/c;)Lcom/tkay/expressad/foundation/g/f/k;

    move-result-object p1

    return-object p1

    .line 30
    :cond_0
    new-instance v2, Lorg/json/JSONObject;

    invoke-direct {v2, v1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-static {v2, p1}, Lcom/tkay/expressad/foundation/g/f/k;->a(Ljava/lang/Object;Lcom/tkay/expressad/foundation/g/f/f/c;)Lcom/tkay/expressad/foundation/g/f/k;

    move-result-object p1
    :try_end_0
    .catch Ljava/io/UnsupportedEncodingException; {:try_start_0 .. :try_end_0} :catch_1
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    return-object p1

    :catch_0
    move-exception v1

    .line 36
    invoke-virtual {v1}, Lorg/json/JSONException;->getMessage()Ljava/lang/String;

    .line 37
    new-instance v1, Lcom/tkay/expressad/foundation/g/f/a/a;

    invoke-direct {v1, v0, p1}, Lcom/tkay/expressad/foundation/g/f/a/a;-><init>(ILcom/tkay/expressad/foundation/g/f/f/c;)V

    invoke-static {v1}, Lcom/tkay/expressad/foundation/g/f/k;->a(Lcom/tkay/expressad/foundation/g/f/a/a;)Lcom/tkay/expressad/foundation/g/f/k;

    move-result-object p1

    return-object p1

    :catch_1
    move-exception v1

    .line 33
    invoke-virtual {v1}, Ljava/io/UnsupportedEncodingException;->getMessage()Ljava/lang/String;

    .line 34
    new-instance v1, Lcom/tkay/expressad/foundation/g/f/a/a;

    invoke-direct {v1, v0, p1}, Lcom/tkay/expressad/foundation/g/f/a/a;-><init>(ILcom/tkay/expressad/foundation/g/f/f/c;)V

    invoke-static {v1}, Lcom/tkay/expressad/foundation/g/f/k;->a(Lcom/tkay/expressad/foundation/g/f/a/a;)Lcom/tkay/expressad/foundation/g/f/k;

    move-result-object p1

    return-object p1
.end method
