.class public Lcom/kwad/components/ad/reward/j/m$a;
.super Lcom/kwad/sdk/core/response/a/a;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/components/ad/reward/j/m;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
    name = "a"
.end annotation


# instance fields
.field public name:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Lcom/kwad/sdk/core/response/a/a;-><init>()V

    const-string v0, "backPressed"

    iput-object v0, p0, Lcom/kwad/components/ad/reward/j/m$a;->name:Ljava/lang/String;

    return-void
.end method
