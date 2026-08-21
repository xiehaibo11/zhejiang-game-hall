.class public final Lcom/kwad/framework/filedownloader/message/h$c;
.super Lcom/kwad/framework/filedownloader/message/h;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/framework/filedownloader/message/h;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
    name = "c"
.end annotation


# instance fields
.field private final acf:Ljava/lang/String;

.field private final adJ:Z

.field private final adK:Ljava/lang/String;

.field private final adX:I


# direct methods
.method constructor <init>(IZILjava/lang/String;Ljava/lang/String;)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/kwad/framework/filedownloader/message/h;-><init>(I)V

    iput-boolean p2, p0, Lcom/kwad/framework/filedownloader/message/h$c;->adJ:Z

    iput p3, p0, Lcom/kwad/framework/filedownloader/message/h$c;->adX:I

    iput-object p4, p0, Lcom/kwad/framework/filedownloader/message/h$c;->acf:Ljava/lang/String;

    iput-object p5, p0, Lcom/kwad/framework/filedownloader/message/h$c;->adK:Ljava/lang/String;

    return-void
.end method

.method constructor <init>(Landroid/os/Parcel;)V
    .locals 1

    invoke-direct {p0, p1}, Lcom/kwad/framework/filedownloader/message/h;-><init>(Landroid/os/Parcel;)V

    invoke-virtual {p1}, Landroid/os/Parcel;->readByte()B

    move-result v0

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    iput-boolean v0, p0, Lcom/kwad/framework/filedownloader/message/h$c;->adJ:Z

    invoke-virtual {p1}, Landroid/os/Parcel;->readInt()I

    move-result v0

    iput v0, p0, Lcom/kwad/framework/filedownloader/message/h$c;->adX:I

    invoke-virtual {p1}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/framework/filedownloader/message/h$c;->acf:Ljava/lang/String;

    invoke-virtual {p1}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/kwad/framework/filedownloader/message/h$c;->adK:Ljava/lang/String;

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

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/message/h$c;->acf:Ljava/lang/String;

    return-object v0
.end method

.method public final getFileName()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/message/h$c;->adK:Ljava/lang/String;

    return-object v0
.end method

.method public final sX()B
    .locals 1

    const/4 v0, 0x2

    return v0
.end method

.method public final uR()Z
    .locals 1

    iget-boolean v0, p0, Lcom/kwad/framework/filedownloader/message/h$c;->adJ:Z

    return v0
.end method

.method public final va()I
    .locals 1

    iget v0, p0, Lcom/kwad/framework/filedownloader/message/h$c;->adX:I

    return v0
.end method

.method public final writeToParcel(Landroid/os/Parcel;I)V
    .locals 0

    invoke-super {p0, p1, p2}, Lcom/kwad/framework/filedownloader/message/h;->writeToParcel(Landroid/os/Parcel;I)V

    iget-boolean p2, p0, Lcom/kwad/framework/filedownloader/message/h$c;->adJ:Z

    invoke-virtual {p1, p2}, Landroid/os/Parcel;->writeByte(B)V

    iget p2, p0, Lcom/kwad/framework/filedownloader/message/h$c;->adX:I

    invoke-virtual {p1, p2}, Landroid/os/Parcel;->writeInt(I)V

    iget-object p2, p0, Lcom/kwad/framework/filedownloader/message/h$c;->acf:Ljava/lang/String;

    invoke-virtual {p1, p2}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    iget-object p2, p0, Lcom/kwad/framework/filedownloader/message/h$c;->adK:Ljava/lang/String;

    invoke-virtual {p1, p2}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    return-void
.end method
