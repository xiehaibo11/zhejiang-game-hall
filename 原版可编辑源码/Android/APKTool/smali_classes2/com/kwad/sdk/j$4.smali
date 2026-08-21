.class final Lcom/kwad/sdk/j$4;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/core/network/l;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/sdk/j;->xo()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# direct methods
.method constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Lcom/kwad/sdk/core/network/j;)V
    .locals 0

    invoke-static {p1}, Lcom/kwad/sdk/core/report/KSLoggerReporter;->c(Lcom/kwad/sdk/core/network/j;)V

    return-void
.end method

.method public final a(Lcom/kwad/sdk/core/network/k;)V
    .locals 0

    invoke-static {p1}, Lcom/kwad/sdk/core/report/KSLoggerReporter;->c(Lcom/kwad/sdk/core/network/k;)V

    return-void
.end method

.method public final xp()Lcom/kwad/sdk/core/b;
    .locals 1

    invoke-static {}, Lcom/kwad/components/core/p/a/c;->pK()Lcom/kwad/components/core/p/a/c;

    move-result-object v0

    return-object v0
.end method
