.class public final Lcom/kwad/sdk/core/report/l;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/core/report/s;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final h(Lorg/json/JSONObject;)Lcom/kwad/sdk/core/report/r;
    .locals 1

    new-instance v0, Lcom/kwad/sdk/core/report/r;

    invoke-direct {v0, p1}, Lcom/kwad/sdk/core/report/r;-><init>(Lorg/json/JSONObject;)V

    return-object v0
.end method
