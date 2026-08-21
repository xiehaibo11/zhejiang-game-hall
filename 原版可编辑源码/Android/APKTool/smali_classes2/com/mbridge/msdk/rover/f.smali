.class public abstract Lcom/mbridge/msdk/rover/f;
.super Lcom/mbridge/msdk/foundation/same/net/f;
.source "RoverReportResponseHandler.java"


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/mbridge/msdk/foundation/same/net/f<",
        "Lorg/json/JSONObject;",
        ">;"
    }
.end annotation


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 9
    invoke-direct {p0}, Lcom/mbridge/msdk/foundation/same/net/f;-><init>()V

    return-void
.end method


# virtual methods
.method public abstract a()V
.end method

.method public abstract a(Ljava/lang/String;)V
.end method

.method public onError(Lcom/mbridge/msdk/foundation/same/net/a/a;)V
    .locals 1

    .line 18
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget p1, p1, Lcom/mbridge/msdk/foundation/same/net/a/a;->a:I

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p1, ""

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/mbridge/msdk/rover/f;->a(Ljava/lang/String;)V

    return-void
.end method

.method public onSuccess(Lcom/mbridge/msdk/foundation/same/net/k;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/mbridge/msdk/foundation/same/net/k<",
            "Lorg/json/JSONObject;",
            ">;)V"
        }
    .end annotation

    .line 13
    invoke-virtual {p0}, Lcom/mbridge/msdk/rover/f;->a()V

    return-void
.end method
