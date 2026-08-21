.class public Lcom/kwad/components/core/q/a;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/api/core/SpeedLimitApi;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public wrapInputStream(Ljava/io/InputStream;)Ljava/io/InputStream;
    .locals 0

    invoke-static {}, Lcom/kwad/components/core/q/b;->pL()Lcom/kwad/components/core/q/b;

    invoke-static {p1}, Lcom/kwad/components/core/q/b;->wrapInputStream(Ljava/io/InputStream;)Ljava/io/InputStream;

    move-result-object p1

    return-object p1
.end method
