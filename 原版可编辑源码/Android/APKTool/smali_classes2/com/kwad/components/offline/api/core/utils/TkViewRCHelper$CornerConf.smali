.class public Lcom/kwad/components/offline/api/core/utils/TkViewRCHelper$CornerConf;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/components/offline/api/core/utils/TkViewRCHelper;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
    name = "CornerConf"
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

    iput-boolean v0, p0, Lcom/kwad/components/offline/api/core/utils/TkViewRCHelper$CornerConf;->leftTop:Z

    iput-boolean v0, p0, Lcom/kwad/components/offline/api/core/utils/TkViewRCHelper$CornerConf;->topRight:Z

    iput-boolean v0, p0, Lcom/kwad/components/offline/api/core/utils/TkViewRCHelper$CornerConf;->rightBottom:Z

    iput-boolean v0, p0, Lcom/kwad/components/offline/api/core/utils/TkViewRCHelper$CornerConf;->bottomLeft:Z

    return-void
.end method


# virtual methods
.method public isBottomLeft()Z
    .locals 1

    iget-boolean v0, p0, Lcom/kwad/components/offline/api/core/utils/TkViewRCHelper$CornerConf;->bottomLeft:Z

    return v0
.end method

.method public isLeftTop()Z
    .locals 1

    iget-boolean v0, p0, Lcom/kwad/components/offline/api/core/utils/TkViewRCHelper$CornerConf;->leftTop:Z

    return v0
.end method

.method public isRightBottom()Z
    .locals 1

    iget-boolean v0, p0, Lcom/kwad/components/offline/api/core/utils/TkViewRCHelper$CornerConf;->rightBottom:Z

    return v0
.end method

.method public isTopRight()Z
    .locals 1

    iget-boolean v0, p0, Lcom/kwad/components/offline/api/core/utils/TkViewRCHelper$CornerConf;->topRight:Z

    return v0
.end method

.method public setAllCorner(Z)V
    .locals 0

    iput-boolean p1, p0, Lcom/kwad/components/offline/api/core/utils/TkViewRCHelper$CornerConf;->leftTop:Z

    iput-boolean p1, p0, Lcom/kwad/components/offline/api/core/utils/TkViewRCHelper$CornerConf;->topRight:Z

    iput-boolean p1, p0, Lcom/kwad/components/offline/api/core/utils/TkViewRCHelper$CornerConf;->rightBottom:Z

    iput-boolean p1, p0, Lcom/kwad/components/offline/api/core/utils/TkViewRCHelper$CornerConf;->bottomLeft:Z

    return-void
.end method

.method public setBottomLeft(Z)Lcom/kwad/components/offline/api/core/utils/TkViewRCHelper$CornerConf;
    .locals 0

    iput-boolean p1, p0, Lcom/kwad/components/offline/api/core/utils/TkViewRCHelper$CornerConf;->bottomLeft:Z

    return-object p0
.end method

.method public setLeftTop(Z)Lcom/kwad/components/offline/api/core/utils/TkViewRCHelper$CornerConf;
    .locals 0

    iput-boolean p1, p0, Lcom/kwad/components/offline/api/core/utils/TkViewRCHelper$CornerConf;->leftTop:Z

    return-object p0
.end method

.method public setRightBottom(Z)Lcom/kwad/components/offline/api/core/utils/TkViewRCHelper$CornerConf;
    .locals 0

    iput-boolean p1, p0, Lcom/kwad/components/offline/api/core/utils/TkViewRCHelper$CornerConf;->rightBottom:Z

    return-object p0
.end method

.method public setTopRight(Z)Lcom/kwad/components/offline/api/core/utils/TkViewRCHelper$CornerConf;
    .locals 0

    iput-boolean p1, p0, Lcom/kwad/components/offline/api/core/utils/TkViewRCHelper$CornerConf;->topRight:Z

    return-object p0
.end method
