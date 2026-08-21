.class public Lcom/bykv/vk/openvk/live/TTLiveToken;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/io/Serializable;


# instance fields
.field public accessToken:Ljava/lang/String;

.field public expireAt:J

.field public name:Ljava/lang/String;

.field public openId:Ljava/lang/String;

.field public refreshToken:Ljava/lang/String;


# direct methods
.method public constructor <init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;JLjava/lang/String;)V
    .locals 2

    .line 15
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-wide/16 v0, 0x0

    .line 12
    iput-wide v0, p0, Lcom/bykv/vk/openvk/live/TTLiveToken;->expireAt:J

    const-string v0, ""

    .line 13
    iput-object v0, p0, Lcom/bykv/vk/openvk/live/TTLiveToken;->refreshToken:Ljava/lang/String;

    .line 16
    iput-object p1, p0, Lcom/bykv/vk/openvk/live/TTLiveToken;->name:Ljava/lang/String;

    .line 17
    iput-object p2, p0, Lcom/bykv/vk/openvk/live/TTLiveToken;->accessToken:Ljava/lang/String;

    .line 18
    iput-object p3, p0, Lcom/bykv/vk/openvk/live/TTLiveToken;->openId:Ljava/lang/String;

    .line 19
    iput-wide p4, p0, Lcom/bykv/vk/openvk/live/TTLiveToken;->expireAt:J

    .line 20
    iput-object p6, p0, Lcom/bykv/vk/openvk/live/TTLiveToken;->refreshToken:Ljava/lang/String;

    return-void
.end method


# virtual methods
.method public toString()Ljava/lang/String;
    .locals 4

    .line 25
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "TTLiveToken{accessToken=\'"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/bykv/vk/openvk/live/TTLiveToken;->accessToken:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/16 v1, 0x27

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    const-string v2, ", openId=\'"

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/bykv/vk/openvk/live/TTLiveToken;->openId:Ljava/lang/String;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    const-string v2, ", expireAt="

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-wide v2, p0, Lcom/bykv/vk/openvk/live/TTLiveToken;->expireAt:J

    invoke-virtual {v0, v2, v3}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v2, ", refreshToken=\'"

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/bykv/vk/openvk/live/TTLiveToken;->refreshToken:Ljava/lang/String;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    const/16 v1, 0x7d

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
