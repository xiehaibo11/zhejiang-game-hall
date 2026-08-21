.class public Lcom/kwad/framework/filedownloader/message/d$f;
.super Lcom/kwad/framework/filedownloader/message/d;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/framework/filedownloader/message/d;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
    name = "f"
.end annotation


# instance fields
.field private final adL:J

.field private final totalBytes:J


# direct methods
.method constructor <init>(IJJ)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/kwad/framework/filedownloader/message/d;-><init>(I)V

    iput-wide p2, p0, Lcom/kwad/framework/filedownloader/message/d$f;->adL:J

    iput-wide p4, p0, Lcom/kwad/framework/filedownloader/message/d$f;->totalBytes:J

    return-void
.end method

.method constructor <init>(Landroid/os/Parcel;)V
    .locals 2

    invoke-direct {p0, p1}, Lcom/kwad/framework/filedownloader/message/d;-><init>(Landroid/os/Parcel;)V

    invoke-virtual {p1}, Landroid/os/Parcel;->readLong()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/framework/filedownloader/message/d$f;->adL:J

    invoke-virtual {p1}, Landroid/os/Parcel;->readLong()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/framework/filedownloader/message/d$f;->totalBytes:J

    return-void
.end method

.method constructor <init>(Lcom/kwad/framework/filedownloader/message/d$f;)V
    .locals 6

    invoke-virtual {p1}, Lcom/kwad/framework/filedownloader/message/d$f;->getId()I

    move-result v1

    invoke-virtual {p1}, Lcom/kwad/framework/filedownloader/message/d$f;->vd()J

    move-result-wide v2

    invoke-virtual {p1}, Lcom/kwad/framework/filedownloader/message/d$f;->vb()J

    move-result-wide v4

    move-object v0, p0

    invoke-direct/range {v0 .. v5}, Lcom/kwad/framework/filedownloader/message/d$f;-><init>(IJJ)V

    return-void
.end method


# virtual methods
.method public describeContents()I
    .locals 1

    const/4 v0, 0x0

    return v0
.end method

.method public sX()B
    .locals 1

    const/4 v0, 0x1

    return v0
.end method

.method public final vb()J
    .locals 2

    iget-wide v0, p0, Lcom/kwad/framework/filedownloader/message/d$f;->totalBytes:J

    return-wide v0
.end method

.method public final vd()J
    .locals 2

    iget-wide v0, p0, Lcom/kwad/framework/filedownloader/message/d$f;->adL:J

    return-wide v0
.end method

.method public writeToParcel(Landroid/os/Parcel;I)V
    .locals 2

    invoke-super {p0, p1, p2}, Lcom/kwad/framework/filedownloader/message/d;->writeToParcel(Landroid/os/Parcel;I)V

    iget-wide v0, p0, Lcom/kwad/framework/filedownloader/message/d$f;->adL:J

    invoke-virtual {p1, v0, v1}, Landroid/os/Parcel;->writeLong(J)V

    iget-wide v0, p0, Lcom/kwad/framework/filedownloader/message/d$f;->totalBytes:J

    invoke-virtual {p1, v0, v1}, Landroid/os/Parcel;->writeLong(J)V

    return-void
.end method
