.class public abstract Lcom/czhj/volley/toolbox/BaseHttpStack;
.super Ljava/lang/Object;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public abstract executeRequest(Lcom/czhj/volley/Request;Ljava/util/Map;)Lcom/czhj/volley/toolbox/HttpResponse;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/czhj/volley/Request<",
            "*>;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)",
            "Lcom/czhj/volley/toolbox/HttpResponse;"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;,
            Lcom/czhj/volley/AuthFailureError;
        }
    .end annotation
.end method
