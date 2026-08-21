.class abstract Lcom/kwad/sdk/utils/a/a$j;
.super Lcom/kwad/sdk/utils/a/a$b;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/sdk/utils/a/a;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x408
    name = "j"
.end annotation


# instance fields
.field aKD:I

.field aKE:Z

.field start:I

.field value:Ljava/lang/Object;


# direct methods
.method constructor <init>(IILjava/lang/Object;IZ)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/sdk/utils/a/a$b;-><init>()V

    iput p1, p0, Lcom/kwad/sdk/utils/a/a$j;->start:I

    iput p2, p0, Lcom/kwad/sdk/utils/a/a$j;->offset:I

    iput-object p3, p0, Lcom/kwad/sdk/utils/a/a$j;->value:Ljava/lang/Object;

    iput p4, p0, Lcom/kwad/sdk/utils/a/a$j;->aKD:I

    iput-boolean p5, p0, Lcom/kwad/sdk/utils/a/a$j;->aKE:Z

    return-void
.end method
