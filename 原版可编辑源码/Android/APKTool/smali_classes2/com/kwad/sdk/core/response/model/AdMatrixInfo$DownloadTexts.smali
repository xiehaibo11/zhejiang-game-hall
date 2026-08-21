.class public Lcom/kwad/sdk/core/response/model/AdMatrixInfo$DownloadTexts;
.super Lcom/kwad/sdk/core/response/a/a;

# interfaces
.implements Ljava/io/Serializable;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/sdk/core/response/model/AdMatrixInfo;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
    name = "DownloadTexts"
.end annotation


# static fields
.field private static final serialVersionUID:J = -0x1fd4e59e7dc923b8L


# instance fields
.field public adActionDescription:Ljava/lang/String;

.field public installAppLabel:Ljava/lang/String;

.field public openAppLabel:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/sdk/core/response/a/a;-><init>()V

    return-void
.end method
