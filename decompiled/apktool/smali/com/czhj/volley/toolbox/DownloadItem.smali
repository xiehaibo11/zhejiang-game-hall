.class public Lcom/czhj/volley/toolbox/DownloadItem;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/czhj/volley/toolbox/DownloadItem$FileType;
    }
.end annotation


# instance fields
.field public error:Lcom/czhj/volley/VolleyError;

.field public filePath:Ljava/lang/String;

.field public md5:Ljava/lang/String;

.field public message:Ljava/lang/String;

.field public networkMs:J

.field public size:J

.field public status:I

.field public type:Lcom/czhj/volley/toolbox/DownloadItem$FileType;

.field public url:Ljava/lang/String;

.field public userRange:Z


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/czhj/volley/toolbox/DownloadItem;->userRange:Z

    return-void
.end method
