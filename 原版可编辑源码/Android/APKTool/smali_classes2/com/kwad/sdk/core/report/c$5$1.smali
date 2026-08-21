.class final Lcom/kwad/sdk/core/report/c$5$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/core/report/n;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/sdk/core/report/c$5;->onError(Lcom/kwad/sdk/core/network/g;ILjava/lang/String;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Object;",
        "Lcom/kwad/sdk/core/report/n<",
        "TT;>;"
    }
.end annotation


# instance fields
.field final synthetic aqN:Lcom/kwad/sdk/core/report/c$5;


# direct methods
.method constructor <init>(Lcom/kwad/sdk/core/report/c$5;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/sdk/core/report/c$5$1;->aqN:Lcom/kwad/sdk/core/report/c$5;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final BU()Lcom/kwad/sdk/core/report/g;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()TT;"
        }
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/core/report/c$5$1;->aqN:Lcom/kwad/sdk/core/report/c$5;

    iget-object v0, v0, Lcom/kwad/sdk/core/report/c$5;->aqK:Lcom/kwad/sdk/core/report/c;

    invoke-static {v0}, Lcom/kwad/sdk/core/report/c;->f(Lcom/kwad/sdk/core/report/c;)Lcom/kwad/sdk/core/report/g;

    move-result-object v0

    return-object v0
.end method
