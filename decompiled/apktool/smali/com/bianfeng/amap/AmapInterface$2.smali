.class Lcom/bianfeng/amap/AmapInterface$2;
.super Ljava/lang/Object;
.source "AmapInterface.java"

# interfaces
.implements Lcom/amap/api/location/AMapLocationListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/bianfeng/amap/AmapInterface;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/bianfeng/amap/AmapInterface;


# direct methods
.method constructor <init>(Lcom/bianfeng/amap/AmapInterface;)V
    .locals 0

    .line 167
    iput-object p1, p0, Lcom/bianfeng/amap/AmapInterface$2;->this$0:Lcom/bianfeng/amap/AmapInterface;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onLocationChanged(Lcom/amap/api/location/AMapLocation;)V
    .locals 2

    .line 170
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "flag=="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Lcom/bianfeng/amap/AmapInterface;->access$200()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/amap/common/AmapLogger;->i(Ljava/lang/String;)V

    .line 171
    invoke-static {}, Lcom/bianfeng/amap/AmapInterface;->access$200()I

    move-result v0

    if-nez v0, :cond_0

    .line 172
    iget-object v0, p0, Lcom/bianfeng/amap/AmapInterface$2;->this$0:Lcom/bianfeng/amap/AmapInterface;

    invoke-static {v0, p1}, Lcom/bianfeng/amap/AmapInterface;->access$300(Lcom/bianfeng/amap/AmapInterface;Lcom/amap/api/location/AMapLocation;)V

    goto :goto_0

    .line 174
    :cond_0
    iget-object v0, p0, Lcom/bianfeng/amap/AmapInterface$2;->this$0:Lcom/bianfeng/amap/AmapInterface;

    invoke-static {v0, p1}, Lcom/bianfeng/amap/AmapInterface;->access$400(Lcom/bianfeng/amap/AmapInterface;Lcom/amap/api/location/AMapLocation;)V

    :goto_0
    return-void
.end method
