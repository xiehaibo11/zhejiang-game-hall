.class final Lcom/kwad/sdk/utils/a/a$g;
.super Lcom/kwad/sdk/utils/a/a$b;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/sdk/utils/a/a;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = "g"
.end annotation


# instance fields
.field value:J


# direct methods
.method constructor <init>(IJ)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/sdk/utils/a/a$b;-><init>()V

    iput p1, p0, Lcom/kwad/sdk/utils/a/a$g;->offset:I

    iput-wide p2, p0, Lcom/kwad/sdk/utils/a/a$g;->value:J

    return-void
.end method


# virtual methods
.method final Kf()B
    .locals 1

    const/4 v0, 0x4

    return v0
.end method
