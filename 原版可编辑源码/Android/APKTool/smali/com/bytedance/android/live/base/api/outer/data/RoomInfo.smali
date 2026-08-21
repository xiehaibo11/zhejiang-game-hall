.class public Lcom/bytedance/android/live/base/api/outer/data/RoomInfo;
.super Ljava/lang/Object;


# instance fields
.field city:Lcom/bytedance/android/live/base/api/outer/data/City;

.field count:Ljava/lang/String;

.field cover:Ljava/lang/String;

.field openRoomId:Ljava/lang/String;

.field orientation:J

.field owner:Lcom/bytedance/android/live/base/api/outer/data/AnchorInfo;

.field requestId:Ljava/lang/String;

.field status:J

.field title:Ljava/lang/String;


# direct methods
.method public constructor <init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;JLcom/bytedance/android/live/base/api/outer/data/City;JLcom/bytedance/android/live/base/api/outer/data/AnchorInfo;Ljava/lang/String;)V
    .locals 0

    .line 15
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 16
    iput-object p1, p0, Lcom/bytedance/android/live/base/api/outer/data/RoomInfo;->openRoomId:Ljava/lang/String;

    .line 17
    iput-object p2, p0, Lcom/bytedance/android/live/base/api/outer/data/RoomInfo;->title:Ljava/lang/String;

    .line 18
    iput-object p3, p0, Lcom/bytedance/android/live/base/api/outer/data/RoomInfo;->cover:Ljava/lang/String;

    .line 19
    iput-object p4, p0, Lcom/bytedance/android/live/base/api/outer/data/RoomInfo;->count:Ljava/lang/String;

    .line 20
    iput-wide p5, p0, Lcom/bytedance/android/live/base/api/outer/data/RoomInfo;->orientation:J

    .line 21
    iput-object p7, p0, Lcom/bytedance/android/live/base/api/outer/data/RoomInfo;->city:Lcom/bytedance/android/live/base/api/outer/data/City;

    .line 22
    iput-wide p8, p0, Lcom/bytedance/android/live/base/api/outer/data/RoomInfo;->status:J

    .line 23
    iput-object p10, p0, Lcom/bytedance/android/live/base/api/outer/data/RoomInfo;->owner:Lcom/bytedance/android/live/base/api/outer/data/AnchorInfo;

    .line 24
    iput-object p11, p0, Lcom/bytedance/android/live/base/api/outer/data/RoomInfo;->requestId:Ljava/lang/String;

    return-void
.end method


# virtual methods
.method public getCity()Lcom/bytedance/android/live/base/api/outer/data/City;
    .locals 1

    .line 68
    iget-object v0, p0, Lcom/bytedance/android/live/base/api/outer/data/RoomInfo;->city:Lcom/bytedance/android/live/base/api/outer/data/City;

    return-object v0
.end method

.method public getCount()Ljava/lang/String;
    .locals 1

    .line 52
    iget-object v0, p0, Lcom/bytedance/android/live/base/api/outer/data/RoomInfo;->count:Ljava/lang/String;

    return-object v0
.end method

.method public getCover()Ljava/lang/String;
    .locals 1

    .line 44
    iget-object v0, p0, Lcom/bytedance/android/live/base/api/outer/data/RoomInfo;->cover:Ljava/lang/String;

    return-object v0
.end method

.method public getOpenRoomId()Ljava/lang/String;
    .locals 1

    .line 28
    iget-object v0, p0, Lcom/bytedance/android/live/base/api/outer/data/RoomInfo;->openRoomId:Ljava/lang/String;

    return-object v0
.end method

.method public getOrientation()J
    .locals 2

    .line 60
    iget-wide v0, p0, Lcom/bytedance/android/live/base/api/outer/data/RoomInfo;->orientation:J

    return-wide v0
.end method

.method public getOwner()Lcom/bytedance/android/live/base/api/outer/data/AnchorInfo;
    .locals 1

    .line 84
    iget-object v0, p0, Lcom/bytedance/android/live/base/api/outer/data/RoomInfo;->owner:Lcom/bytedance/android/live/base/api/outer/data/AnchorInfo;

    return-object v0
.end method

.method public getRequestId()Ljava/lang/String;
    .locals 1

    .line 92
    iget-object v0, p0, Lcom/bytedance/android/live/base/api/outer/data/RoomInfo;->requestId:Ljava/lang/String;

    return-object v0
.end method

.method public getStatus()J
    .locals 2

    .line 76
    iget-wide v0, p0, Lcom/bytedance/android/live/base/api/outer/data/RoomInfo;->status:J

    return-wide v0
.end method

.method public getTitle()Ljava/lang/String;
    .locals 1

    .line 36
    iget-object v0, p0, Lcom/bytedance/android/live/base/api/outer/data/RoomInfo;->title:Ljava/lang/String;

    return-object v0
.end method

.method public setCity(Lcom/bytedance/android/live/base/api/outer/data/City;)V
    .locals 0

    .line 72
    iput-object p1, p0, Lcom/bytedance/android/live/base/api/outer/data/RoomInfo;->city:Lcom/bytedance/android/live/base/api/outer/data/City;

    return-void
.end method

.method public setCount(Ljava/lang/String;)V
    .locals 0

    .line 56
    iput-object p1, p0, Lcom/bytedance/android/live/base/api/outer/data/RoomInfo;->count:Ljava/lang/String;

    return-void
.end method

.method public setCover(Ljava/lang/String;)V
    .locals 0

    .line 48
    iput-object p1, p0, Lcom/bytedance/android/live/base/api/outer/data/RoomInfo;->cover:Ljava/lang/String;

    return-void
.end method

.method public setOpenRoomId(Ljava/lang/String;)V
    .locals 0

    .line 32
    iput-object p1, p0, Lcom/bytedance/android/live/base/api/outer/data/RoomInfo;->openRoomId:Ljava/lang/String;

    return-void
.end method

.method public setOrientation(J)V
    .locals 0

    .line 64
    iput-wide p1, p0, Lcom/bytedance/android/live/base/api/outer/data/RoomInfo;->orientation:J

    return-void
.end method

.method public setOwner(Lcom/bytedance/android/live/base/api/outer/data/AnchorInfo;)V
    .locals 0

    .line 88
    iput-object p1, p0, Lcom/bytedance/android/live/base/api/outer/data/RoomInfo;->owner:Lcom/bytedance/android/live/base/api/outer/data/AnchorInfo;

    return-void
.end method

.method public setRequestId(Ljava/lang/String;)V
    .locals 0

    .line 96
    iput-object p1, p0, Lcom/bytedance/android/live/base/api/outer/data/RoomInfo;->requestId:Ljava/lang/String;

    return-void
.end method

.method public setStatus(J)V
    .locals 0

    .line 80
    iput-wide p1, p0, Lcom/bytedance/android/live/base/api/outer/data/RoomInfo;->status:J

    return-void
.end method

.method public setTitle(Ljava/lang/String;)V
    .locals 0

    .line 40
    iput-object p1, p0, Lcom/bytedance/android/live/base/api/outer/data/RoomInfo;->title:Ljava/lang/String;

    return-void
.end method
