.class final Lcom/kwad/sdk/api/loader/m;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/sdk/api/loader/m$b;,
        Lcom/kwad/sdk/api/loader/m$h;,
        Lcom/kwad/sdk/api/loader/m$d;,
        Lcom/kwad/sdk/api/loader/m$g;,
        Lcom/kwad/sdk/api/loader/m$e;,
        Lcom/kwad/sdk/api/loader/m$a;,
        Lcom/kwad/sdk/api/loader/m$c;,
        Lcom/kwad/sdk/api/loader/m$f;
    }
.end annotation


# direct methods
.method static yw()Lcom/kwad/sdk/api/loader/m$f;
    .locals 5
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Lcom/kwad/sdk/api/loader/m$f<",
            "Ljava/lang/Boolean;",
            ">;"
        }
    .end annotation

    new-instance v0, Lcom/kwad/sdk/api/loader/m$e;

    new-instance v1, Lcom/kwad/sdk/api/loader/m$g;

    new-instance v2, Lcom/kwad/sdk/api/loader/m$d;

    new-instance v3, Lcom/kwad/sdk/api/loader/m$h;

    new-instance v4, Lcom/kwad/sdk/api/loader/m$b;

    invoke-direct {v4}, Lcom/kwad/sdk/api/loader/m$b;-><init>()V

    invoke-direct {v3, v4}, Lcom/kwad/sdk/api/loader/m$h;-><init>(Lcom/kwad/sdk/api/loader/m$f;)V

    invoke-direct {v2, v3}, Lcom/kwad/sdk/api/loader/m$d;-><init>(Lcom/kwad/sdk/api/loader/m$f;)V

    invoke-direct {v1, v2}, Lcom/kwad/sdk/api/loader/m$g;-><init>(Lcom/kwad/sdk/api/loader/m$f;)V

    invoke-direct {v0, v1}, Lcom/kwad/sdk/api/loader/m$e;-><init>(Lcom/kwad/sdk/api/loader/m$f;)V

    return-object v0
.end method
