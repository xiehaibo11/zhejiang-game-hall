.class public final Lcom/kwad/components/core/c/d$d;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/core/c/c;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/components/core/c/d;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
    name = "d"
.end annotation


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final c(Lcom/kwad/components/core/p/a/a;)V
    .locals 1

    new-instance v0, Lcom/kwad/components/core/c/d$b;

    invoke-direct {v0, p1}, Lcom/kwad/components/core/c/d$b;-><init>(Lcom/kwad/components/core/p/a/a;)V

    invoke-static {p1, v0}, Lcom/kwad/components/core/c/d;->b(Lcom/kwad/components/core/p/a/a;Lcom/kwad/sdk/core/network/p;)V

    return-void
.end method
