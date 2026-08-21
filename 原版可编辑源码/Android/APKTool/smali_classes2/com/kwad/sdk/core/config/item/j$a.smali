.class public Lcom/kwad/sdk/core/config/item/j$a;
.super Lcom/kwad/sdk/core/response/a/a;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/sdk/core/config/item/j;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
    name = "a"
.end annotation


# instance fields
.field public amF:I

.field public amG:I


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Lcom/kwad/sdk/core/response/a/a;-><init>()V

    const v0, 0x2bf20

    iput v0, p0, Lcom/kwad/sdk/core/config/item/j$a;->amF:I

    const v0, 0x15f90

    iput v0, p0, Lcom/kwad/sdk/core/config/item/j$a;->amG:I

    return-void
.end method
