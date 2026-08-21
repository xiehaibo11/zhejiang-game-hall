.class public final Lcom/mbridge/msdk/c/a$a;
.super Ljava/lang/Object;
.source "Setting.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/c/a;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
    name = "a"
.end annotation


# instance fields
.field private a:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private b:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private c:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private d:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 2269
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a()Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .line 2276
    iget-object v0, p0, Lcom/mbridge/msdk/c/a$a;->a:Ljava/util/List;

    return-object v0
.end method

.method public final a(Lorg/json/JSONObject;)V
    .locals 1

    :try_start_0
    const-string v0, "x"

    .line 2309
    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 2311
    invoke-static {v0}, Lcom/mbridge/msdk/foundation/tools/m;->a(Lorg/json/JSONArray;)Ljava/util/ArrayList;

    move-result-object v0

    iput-object v0, p0, Lcom/mbridge/msdk/c/a$a;->a:Ljava/util/List;

    :cond_0
    const-string v0, "y"

    .line 2314
    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 2316
    invoke-static {v0}, Lcom/mbridge/msdk/foundation/tools/m;->a(Lorg/json/JSONArray;)Ljava/util/ArrayList;

    move-result-object v0

    iput-object v0, p0, Lcom/mbridge/msdk/c/a$a;->b:Ljava/util/List;

    :cond_1
    const-string v0, "width"

    .line 2319
    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v0

    if-eqz v0, :cond_2

    .line 2321
    invoke-static {v0}, Lcom/mbridge/msdk/foundation/tools/m;->a(Lorg/json/JSONArray;)Ljava/util/ArrayList;

    move-result-object v0

    iput-object v0, p0, Lcom/mbridge/msdk/c/a$a;->c:Ljava/util/List;

    :cond_2
    const-string v0, "height"

    .line 2324
    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object p1

    if-eqz p1, :cond_3

    .line 2326
    invoke-static {p1}, Lcom/mbridge/msdk/foundation/tools/m;->a(Lorg/json/JSONArray;)Ljava/util/ArrayList;

    move-result-object p1

    iput-object p1, p0, Lcom/mbridge/msdk/c/a$a;->d:Ljava/util/List;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 2329
    sget-boolean v0, Lcom/mbridge/msdk/MBridgeConstans;->DEBUG:Z

    if-eqz v0, :cond_3

    .line 2330
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_3
    :goto_0
    return-void
.end method

.method public final b()Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .line 2284
    iget-object v0, p0, Lcom/mbridge/msdk/c/a$a;->b:Ljava/util/List;

    return-object v0
.end method

.method public final c()Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .line 2292
    iget-object v0, p0, Lcom/mbridge/msdk/c/a$a;->c:Ljava/util/List;

    return-object v0
.end method

.method public final d()Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .line 2300
    iget-object v0, p0, Lcom/mbridge/msdk/c/a$a;->d:Ljava/util/List;

    return-object v0
.end method
