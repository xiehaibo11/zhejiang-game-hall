.class public final Lcom/kwad/sdk/widget/h$a;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/sdk/widget/h;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
    name = "a"
.end annotation


# instance fields
.field private bottomLeft:Z

.field private leftTop:Z

.field private rightBottom:Z

.field private topRight:Z


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/kwad/sdk/widget/h$a;->leftTop:Z

    iput-boolean v0, p0, Lcom/kwad/sdk/widget/h$a;->topRight:Z

    iput-boolean v0, p0, Lcom/kwad/sdk/widget/h$a;->rightBottom:Z

    iput-boolean v0, p0, Lcom/kwad/sdk/widget/h$a;->bottomLeft:Z

    return-void
.end method


# virtual methods
.method public final bS(Z)Lcom/kwad/sdk/widget/h$a;
    .locals 0

    iput-boolean p1, p0, Lcom/kwad/sdk/widget/h$a;->leftTop:Z

    return-object p0
.end method

.method public final bT(Z)Lcom/kwad/sdk/widget/h$a;
    .locals 0

    iput-boolean p1, p0, Lcom/kwad/sdk/widget/h$a;->topRight:Z

    return-object p0
.end method

.method public final bU(Z)Lcom/kwad/sdk/widget/h$a;
    .locals 0

    iput-boolean p1, p0, Lcom/kwad/sdk/widget/h$a;->rightBottom:Z

    return-object p0
.end method

.method public final bV(Z)Lcom/kwad/sdk/widget/h$a;
    .locals 0

    iput-boolean p1, p0, Lcom/kwad/sdk/widget/h$a;->bottomLeft:Z

    return-object p0
.end method

.method public final isBottomLeft()Z
    .locals 1

    iget-boolean v0, p0, Lcom/kwad/sdk/widget/h$a;->bottomLeft:Z

    return v0
.end method

.method public final isLeftTop()Z
    .locals 1

    iget-boolean v0, p0, Lcom/kwad/sdk/widget/h$a;->leftTop:Z

    return v0
.end method

.method public final isRightBottom()Z
    .locals 1

    iget-boolean v0, p0, Lcom/kwad/sdk/widget/h$a;->rightBottom:Z

    return v0
.end method

.method public final isTopRight()Z
    .locals 1

    iget-boolean v0, p0, Lcom/kwad/sdk/widget/h$a;->topRight:Z

    return v0
.end method

.method public final setAllCorner(Z)V
    .locals 0

    iput-boolean p1, p0, Lcom/kwad/sdk/widget/h$a;->leftTop:Z

    iput-boolean p1, p0, Lcom/kwad/sdk/widget/h$a;->topRight:Z

    iput-boolean p1, p0, Lcom/kwad/sdk/widget/h$a;->rightBottom:Z

    iput-boolean p1, p0, Lcom/kwad/sdk/widget/h$a;->bottomLeft:Z

    return-void
.end method
