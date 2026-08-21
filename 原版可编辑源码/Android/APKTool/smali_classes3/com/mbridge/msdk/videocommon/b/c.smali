.class public final Lcom/mbridge/msdk/videocommon/b/c;
.super Ljava/lang/Object;
.source "Cbprule.java"


# instance fields
.field private a:I

.field private b:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/Integer;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method private constructor <init>(ILjava/util/List;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(I",
            "Ljava/util/List<",
            "Ljava/lang/Integer;",
            ">;)V"
        }
    .end annotation

    .line 18
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 19
    iput p1, p0, Lcom/mbridge/msdk/videocommon/b/c;->a:I

    .line 20
    iput-object p2, p0, Lcom/mbridge/msdk/videocommon/b/c;->b:Ljava/util/List;

    return-void
.end method

.method public static a(Lorg/json/JSONObject;)Lcom/mbridge/msdk/videocommon/b/c;
    .locals 8

    .line 40
    new-instance v0, Lcom/mbridge/msdk/videocommon/b/c;

    const/4 v1, 0x4

    new-array v2, v1, [Ljava/lang/Integer;

    const/4 v3, 0x1

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    const/4 v5, 0x0

    aput-object v4, v2, v5

    const/4 v4, 0x2

    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v6

    aput-object v6, v2, v3

    const/4 v6, 0x3

    invoke-static {v6}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v7

    aput-object v7, v2, v4

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    aput-object v1, v2, v6

    invoke-static {v2}, Ljava/util/Arrays;->asList([Ljava/lang/Object;)Ljava/util/List;

    move-result-object v1

    invoke-direct {v0, v3, v1}, Lcom/mbridge/msdk/videocommon/b/c;-><init>(ILjava/util/List;)V

    if-nez p0, :cond_0

    return-object v0

    :cond_0
    :try_start_0
    const-string v1, "type"

    .line 45
    invoke-virtual {p0, v1}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v1

    .line 46
    new-instance v2, Ljava/util/ArrayList;

    invoke-direct {v2}, Ljava/util/ArrayList;-><init>()V

    const-string v3, "value"

    .line 48
    invoke-virtual {p0, v3}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object p0

    if-eqz p0, :cond_1

    .line 49
    invoke-virtual {p0}, Lorg/json/JSONArray;->length()I

    move-result v3

    if-lez v3, :cond_1

    .line 50
    :goto_0
    invoke-virtual {p0}, Lorg/json/JSONArray;->length()I

    move-result v3

    if-ge v5, v3, :cond_1

    .line 51
    invoke-virtual {p0, v5}, Lorg/json/JSONArray;->optInt(I)I

    move-result v3

    .line 52
    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    invoke-interface {v2, v3}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    add-int/lit8 v5, v5, 0x1

    goto :goto_0

    .line 55
    :cond_1
    new-instance p0, Lcom/mbridge/msdk/videocommon/b/c;

    invoke-direct {p0, v1, v2}, Lcom/mbridge/msdk/videocommon/b/c;-><init>(ILjava/util/List;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    move-object v0, p0

    goto :goto_1

    :catch_0
    move-exception p0

    .line 58
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    :goto_1
    return-object v0
.end method


# virtual methods
.method public final a()I
    .locals 1

    .line 24
    iget v0, p0, Lcom/mbridge/msdk/videocommon/b/c;->a:I

    return v0
.end method

.method public final b()Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Ljava/lang/Integer;",
            ">;"
        }
    .end annotation

    .line 32
    iget-object v0, p0, Lcom/mbridge/msdk/videocommon/b/c;->b:Ljava/util/List;

    return-object v0
.end method
