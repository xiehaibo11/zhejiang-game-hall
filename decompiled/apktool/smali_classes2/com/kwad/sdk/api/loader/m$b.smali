.class final Lcom/kwad/sdk/api/loader/m$b;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/api/loader/m$f;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/sdk/api/loader/m;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = "b"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Object;",
        "Lcom/kwad/sdk/api/loader/m$f<",
        "Lcom/kwad/sdk/api/loader/a$a;",
        ">;"
    }
.end annotation


# direct methods
.method constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Lcom/kwad/sdk/api/loader/v;Lcom/kwad/sdk/api/loader/m$c;)V
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/kwad/sdk/api/loader/v;",
            "Lcom/kwad/sdk/api/loader/m$c<",
            "Lcom/kwad/sdk/api/loader/a$a;",
            ">;)V"
        }
    .end annotation

    :try_start_0
    new-instance v0, Lcom/kwad/sdk/api/loader/f;

    invoke-direct {v0, p1}, Lcom/kwad/sdk/api/loader/f;-><init>(Lcom/kwad/sdk/api/loader/v;)V

    new-instance v1, Lcom/kwad/sdk/api/loader/m$b$1;

    invoke-direct {v1, p0, p2, p1}, Lcom/kwad/sdk/api/loader/m$b$1;-><init>(Lcom/kwad/sdk/api/loader/m$b;Lcom/kwad/sdk/api/loader/m$c;Lcom/kwad/sdk/api/loader/v;)V

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/api/loader/f;->a(Lcom/kwad/sdk/api/loader/f$a;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    return-void
.end method
