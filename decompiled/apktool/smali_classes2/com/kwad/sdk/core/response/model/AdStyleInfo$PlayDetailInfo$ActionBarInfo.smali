.class public Lcom/kwad/sdk/core/response/model/AdStyleInfo$PlayDetailInfo$ActionBarInfo;
.super Lcom/kwad/sdk/core/response/a/a;

# interfaces
.implements Ljava/io/Serializable;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/sdk/core/response/model/AdStyleInfo$PlayDetailInfo;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
    name = "ActionBarInfo"
.end annotation


# static fields
.field private static final serialVersionUID:J = 0x75118b82ebb43a8cL


# instance fields
.field public cardShowTime:J

.field public lightBtnShowTime:J

.field public translateBtnShowTime:J


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/sdk/core/response/a/a;-><init>()V

    return-void
.end method
