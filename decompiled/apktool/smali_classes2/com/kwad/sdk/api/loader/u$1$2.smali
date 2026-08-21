.class final Lcom/kwad/sdk/api/loader/u$1$2;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/api/loader/m$c;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/sdk/api/loader/u$1;->run()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Object;",
        "Lcom/kwad/sdk/api/loader/m$c<",
        "Ljava/lang/Boolean;",
        ">;"
    }
.end annotation


# instance fields
.field final synthetic ajq:Lcom/kwad/sdk/api/loader/u$1;


# direct methods
.method constructor <init>(Lcom/kwad/sdk/api/loader/u$1;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/sdk/api/loader/u$1$2;->ajq:Lcom/kwad/sdk/api/loader/u$1;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private static c(Ljava/lang/Boolean;)V
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "onNewResult: "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    return-void
.end method


# virtual methods
.method public final synthetic g(Ljava/lang/Object;)V
    .locals 0

    check-cast p1, Ljava/lang/Boolean;

    invoke-static {p1}, Lcom/kwad/sdk/api/loader/u$1$2;->c(Ljava/lang/Boolean;)V

    return-void
.end method
