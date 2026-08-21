.class public Lcom/kwad/framework/filedownloader/message/d$d;
.super Lcom/kwad/framework/filedownloader/message/d;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/framework/filedownloader/message/d;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
    name = "d"
.end annotation


# instance fields
.field private final adL:J

.field private final adM:Ljava/lang/Throwable;


# direct methods
.method constructor <init>(IJLjava/lang/Throwable;)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/kwad/framework/filedownloader/message/d;-><init>(I)V

    iput-wide p2, p0, Lcom/kwad/framework/filedownloader/message/d$d;->adL:J

    iput-object p4, p0, Lcom/kwad/framework/filedownloader/message/d$d;->adM:Ljava/lang/Throwable;

    return-void
.end method

.method constructor <init>(Landroid/os/Parcel;)V
    .locals 2

    invoke-direct {p0, p1}, Lcom/kwad/framework/filedownloader/message/d;-><init>(Landroid/os/Parcel;)V

    invoke-virtual {p1}, Landroid/os/Parcel;->readLong()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/framework/filedownloader/message/d$d;->adL:J

    invoke-virtual {p1}, Landroid/os/Parcel;->readSerializable()Ljava/io/Serializable;

    move-result-object p1

    check-cast p1, Ljava/lang/Throwable;

    iput-object p1, p0, Lcom/kwad/framework/filedownloader/message/d$d;->adM:Ljava/lang/Throwable;

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

    const/4 v0, -0x1

    return v0
.end method

.method public final vd()J
    .locals 2

    iget-wide v0, p0, Lcom/kwad/framework/filedownloader/message/d$d;->adL:J

    return-wide v0
.end method

.method public final ve()Ljava/lang/Throwable;
    .locals 1

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/message/d$d;->adM:Ljava/lang/Throwable;

    return-object v0
.end method

.method public writeToParcel(Landroid/os/Parcel;I)V
    .locals 2

    invoke-super {p0, p1, p2}, Lcom/kwad/framework/filedownloader/message/d;->writeToParcel(Landroid/os/Parcel;I)V

    iget-wide v0, p0, Lcom/kwad/framework/filedownloader/message/d$d;->adL:J

    invoke-virtual {p1, v0, v1}, Landroid/os/Parcel;->writeLong(J)V

    iget-object p2, p0, Lcom/kwad/framework/filedownloader/message/d$d;->adM:Ljava/lang/Throwable;

    invoke-virtual {p1, p2}, Landroid/os/Parcel;->writeSerializable(Ljava/io/Serializable;)V

    return-void
.end method
