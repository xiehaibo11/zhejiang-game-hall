.class final Lcom/kwad/sdk/a/a/c$a;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/sdk/a/a/c;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x18
    name = "a"
.end annotation


# static fields
.field static final ahM:Lcom/kwad/sdk/a/a/c;


# direct methods
.method static constructor <clinit>()V
    .locals 2

    new-instance v0, Lcom/kwad/sdk/a/a/c;

    const/4 v1, 0x0

    invoke-direct {v0, v1}, Lcom/kwad/sdk/a/a/c;-><init>(B)V

    sput-object v0, Lcom/kwad/sdk/a/a/c$a;->ahM:Lcom/kwad/sdk/a/a/c;

    return-void
.end method
