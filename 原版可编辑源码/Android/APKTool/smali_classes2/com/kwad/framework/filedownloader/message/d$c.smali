.class public final Lcom/kwad/framework/filedownloader/message/d$c;
.super Lcom/kwad/framework/filedownloader/message/d;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/framework/filedownloader/message/d;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
    name = "c"
.end annotation


# instance fields
.field private final acf:Ljava/lang/String;

.field private final adJ:Z

.field private final adK:Ljava/lang/String;

.field private final totalBytes:J


# direct methods
.method constructor <init>(IZJLjava/lang/String;Ljava/lang/String;)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/kwad/framework/filedownloader/message/d;-><init>(I)V

    iput-boolean p2, p0, Lcom/kwad/framework/filedownloader/message/d$c;->adJ:Z

    iput-wide p3, p0, Lcom/kwad/framework/filedownloader/message/d$c;->totalBytes:J

    iput-object p5, p0, Lcom/kwad/framework/filedownloader/message/d$c;->acf:Ljava/lang/String;

    iput-object p6, p0, Lcom/kwad/framework/filedownloader/message/d$c;->adK:Ljava/lang/String;

    return-void
.end method

.method constructor <init>(Landroid/os/Parcel;)V
    .locals 2

    invoke-direct {p0, p1}, Lcom/kwad/framework/filedownloader/message/d;-><init>(Landroid/os/Parcel;)V

    invoke-virtual {p1}, Landroid/os/Parcel;->readByte()B

    move-result v0

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    iput-boolean v0, p0, Lcom/kwad/framework/filedownloader/message/d$c;->adJ:Z

    invoke-virtual {p1}, Landroid/os/Parcel;->readLong()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/framework/filedownloader/message/d$c;->totalBytes:J

    invoke-virtual {p1}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/framework/filedownloader/message/d$c;->acf:Ljava/lang/String;

    invoke-virtual {p1}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/kwad/framework/filedownloader/message/d$c;->adK:Ljava/lang/String;

    return-void
.end method


# virtual methods
.method public final describeContents()I
    .locals 1

    const/4 v0, 0x0

    return v0
.end method

.method public final getEtag()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/message/d$c;->acf:Ljava/lang/String;

    return-object v0
.end method

.method public final getFileName()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/message/d$c;->adK:Ljava/lang/String;

    return-object v0
.end method

.method public final sX()B
    .locals 1

    const/4 v0, 0x2

    return v0
.end method

.method public final uR()Z
    .locals 1

    iget-boolean v0, p0, Lcom/kwad/framework/filedownloader/message/d$c;->adJ:Z

    return v0
.end method

.method public final vb()J
    .locals 2

    iget-wide v0, p0, Lcom/kwad/framework/filedownloader/message/d$c;->totalBytes:J

    return-wide v0
.end method

.method public final writeToParcel(Landroid/os/Parcel;I)V
    .locals 2

    invoke-super {p0, p1, p2}, Lcom/kwad/framework/filedownloader/message/d;->writeToParcel(Landroid/os/Parcel;I)V

    iget-boolean p2, p0, Lcom/kwad/framework/filedownloader/message/d$c;->adJ:Z

    invoke-virtual {p1, p2}, Landroid/os/Parcel;->writeByte(B)V

    iget-wide v0, p0, Lcom/kwad/framework/filedownloader/message/d$c;->totalBytes:J

    invoke-virtual {p1, v0, v1}, Landroid/os/Parcel;->writeLong(J)V

    iget-object p2, p0, Lcom/kwad/framework/filedownloader/message/d$c;->acf:Ljava/lang/String;

    invoke-virtual {p1, p2}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    iget-object p2, p0, Lcom/kwad/framework/filedownloader/message/d$c;->adK:Ljava/lang/String;

    invoke-virtual {p1, p2}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    return-void
.end method
