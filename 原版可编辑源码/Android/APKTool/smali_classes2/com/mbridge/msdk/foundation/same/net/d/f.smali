.class public Lcom/mbridge/msdk/foundation/same/net/d/f;
.super Lcom/mbridge/msdk/foundation/same/net/i;
.source "StringRequest.java"


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/mbridge/msdk/foundation/same/net/i<",
        "Ljava/lang/String;",
        ">;"
    }
.end annotation


# static fields
.field private static final c:Ljava/lang/String;


# instance fields
.field private d:Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 19
    const-class v0, Lcom/mbridge/msdk/foundation/same/net/d/f;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mbridge/msdk/foundation/same/net/d/f;->c:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(ILjava/lang/String;Ljava/lang/String;Lcom/mbridge/msdk/foundation/same/net/e;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(I",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Lcom/mbridge/msdk/foundation/same/net/e<",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    .line 31
    invoke-direct {p0, p1, p2, p4}, Lcom/mbridge/msdk/foundation/same/net/i;-><init>(ILjava/lang/String;Lcom/mbridge/msdk/foundation/same/net/e;)V

    .line 32
    iput-object p3, p0, Lcom/mbridge/msdk/foundation/same/net/d/f;->d:Ljava/lang/String;

    return-void
.end method


# virtual methods
.method protected final a(Lcom/mbridge/msdk/foundation/same/net/e/c;)Lcom/mbridge/msdk/foundation/same/net/k;
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/mbridge/msdk/foundation/same/net/e/c;",
            ")",
            "Lcom/mbridge/msdk/foundation/same/net/k<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .line 54
    :try_start_0
    new-instance v0, Ljava/lang/String;

    iget-object v1, p1, Lcom/mbridge/msdk/foundation/same/net/e/c;->b:[B

    iget-object v2, p1, Lcom/mbridge/msdk/foundation/same/net/e/c;->d:Ljava/util/List;

    invoke-static {v2}, Lcom/mbridge/msdk/foundation/same/net/f/b;->a(Ljava/util/List;)Ljava/lang/String;

    move-result-object v2

    invoke-direct {v0, v1, v2}, Ljava/lang/String;-><init>([BLjava/lang/String;)V

    .line 55
    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/same/net/k;->a(Ljava/lang/Object;Lcom/mbridge/msdk/foundation/same/net/e/c;)Lcom/mbridge/msdk/foundation/same/net/k;

    move-result-object p1
    :try_end_0
    .catch Ljava/io/UnsupportedEncodingException; {:try_start_0 .. :try_end_0} :catch_0

    return-object p1

    :catch_0
    move-exception v0

    .line 57
    sget-object v1, Lcom/mbridge/msdk/foundation/same/net/d/f;->c:Ljava/lang/String;

    invoke-virtual {v0}, Ljava/io/UnsupportedEncodingException;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 58
    new-instance v0, Lcom/mbridge/msdk/foundation/same/net/a/a;

    const/16 v1, 0x8

    invoke-direct {v0, v1, p1}, Lcom/mbridge/msdk/foundation/same/net/a/a;-><init>(ILcom/mbridge/msdk/foundation/same/net/e/c;)V

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/same/net/k;->a(Lcom/mbridge/msdk/foundation/same/net/a/a;)Lcom/mbridge/msdk/foundation/same/net/k;

    move-result-object p1

    return-object p1
.end method

.method public final e()[B
    .locals 4

    const/4 v0, 0x0

    .line 42
    :try_start_0
    iget-object v1, p0, Lcom/mbridge/msdk/foundation/same/net/d/f;->d:Ljava/lang/String;

    if-nez v1, :cond_0

    goto :goto_0

    :cond_0
    iget-object v1, p0, Lcom/mbridge/msdk/foundation/same/net/d/f;->d:Ljava/lang/String;

    const-string v2, "utf-8"

    invoke-virtual {v1, v2}, Ljava/lang/String;->getBytes(Ljava/lang/String;)[B

    move-result-object v0
    :try_end_0
    .catch Ljava/io/UnsupportedEncodingException; {:try_start_0 .. :try_end_0} :catch_0

    :goto_0
    return-object v0

    .line 44
    :catch_0
    sget-object v1, Lcom/mbridge/msdk/foundation/same/net/d/f;->c:Ljava/lang/String;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "Unsupported Encoding while trying to get the bytes of "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/mbridge/msdk/foundation/same/net/d/f;->d:Ljava/lang/String;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, " using utf-8"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    return-object v0
.end method
