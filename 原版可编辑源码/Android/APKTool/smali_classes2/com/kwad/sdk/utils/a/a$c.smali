.class final Lcom/kwad/sdk/utils/a/a$c;
.super Lcom/kwad/sdk/utils/a/a$b;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/sdk/utils/a/a;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = "c"
.end annotation


# instance fields
.field value:Z


# direct methods
.method constructor <init>(IZ)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/sdk/utils/a/a$b;-><init>()V

    iput p1, p0, Lcom/kwad/sdk/utils/a/a$c;->offset:I

    iput-boolean p2, p0, Lcom/kwad/sdk/utils/a/a$c;->value:Z

    return-void
.end method


# virtual methods
.method final Kf()B
    .locals 1

    const/4 v0, 0x1

    return v0
.end method
