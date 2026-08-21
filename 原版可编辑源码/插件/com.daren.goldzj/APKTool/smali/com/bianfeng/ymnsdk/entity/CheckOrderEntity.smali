.class public Lcom/bianfeng/ymnsdk/entity/CheckOrderEntity;
.super Ljava/lang/Object;
.source "CheckOrderEntity.java"


# instance fields
.field private channel_id:I

.field private client_ip:Ljava/lang/String;

.field private created_at:Ljava/lang/String;

.field private deliver_status:I

.field private discount:I

.field private from_type:I

.field private inst_id:I

.field private is_test:I

.field private item_code:Ljava/lang/String;

.field private item_qty:I

.field private numid:Ljava/lang/String;

.field private order_no:Ljava/lang/String;

.field private par_value:Ljava/lang/String;

.field private pay_attach:Ljava/lang/String;

.field private pay_status:I

.field private rewards:Ljava/lang/Object;

.field private source:Ljava/lang/String;

.field private total_fee:Ljava/lang/String;

.field private trans_no:Ljava/lang/String;

.field private userid:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 1
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public getChannel_id()I
    .locals 1

    .line 1
    iget v0, p0, Lcom/bianfeng/ymnsdk/entity/CheckOrderEntity;->channel_id:I

    return v0
.end method

.method public getClient_ip()Ljava/lang/String;
    .locals 1

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/entity/CheckOrderEntity;->client_ip:Ljava/lang/String;

    return-object v0
.end method

.method public getCreated_at()Ljava/lang/String;
    .locals 1

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/entity/CheckOrderEntity;->created_at:Ljava/lang/String;

    return-object v0
.end method

.method public getDeliver_status()I
    .locals 1

    .line 1
    iget v0, p0, Lcom/bianfeng/ymnsdk/entity/CheckOrderEntity;->deliver_status:I

    return v0
.end method

.method public getDiscount()I
    .locals 1

    .line 1
    iget v0, p0, Lcom/bianfeng/ymnsdk/entity/CheckOrderEntity;->discount:I

    return v0
.end method

.method public getFrom_type()I
    .locals 1

    .line 1
    iget v0, p0, Lcom/bianfeng/ymnsdk/entity/CheckOrderEntity;->from_type:I

    return v0
.end method

.method public getInst_id()I
    .locals 1

    .line 1
    iget v0, p0, Lcom/bianfeng/ymnsdk/entity/CheckOrderEntity;->inst_id:I

    return v0
.end method

.method public getIs_test()I
    .locals 1

    .line 1
    iget v0, p0, Lcom/bianfeng/ymnsdk/entity/CheckOrderEntity;->is_test:I

    return v0
.end method

.method public getItem_code()Ljava/lang/String;
    .locals 1

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/entity/CheckOrderEntity;->item_code:Ljava/lang/String;

    return-object v0
.end method

.method public getItem_qty()I
    .locals 1

    .line 1
    iget v0, p0, Lcom/bianfeng/ymnsdk/entity/CheckOrderEntity;->item_qty:I

    return v0
.end method

.method public getNumid()Ljava/lang/String;
    .locals 1

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/entity/CheckOrderEntity;->numid:Ljava/lang/String;

    return-object v0
.end method

.method public getOrder_no()Ljava/lang/String;
    .locals 1

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/entity/CheckOrderEntity;->order_no:Ljava/lang/String;

    return-object v0
.end method

.method public getPar_value()Ljava/lang/String;
    .locals 1

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/entity/CheckOrderEntity;->par_value:Ljava/lang/String;

    return-object v0
.end method

.method public getPay_attach()Ljava/lang/String;
    .locals 1

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/entity/CheckOrderEntity;->pay_attach:Ljava/lang/String;

    return-object v0
.end method

.method public getPay_status()I
    .locals 1

    .line 1
    iget v0, p0, Lcom/bianfeng/ymnsdk/entity/CheckOrderEntity;->pay_status:I

    return v0
.end method

.method public getRewards()Ljava/lang/Object;
    .locals 1

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/entity/CheckOrderEntity;->rewards:Ljava/lang/Object;

    return-object v0
.end method

.method public getSource()Ljava/lang/String;
    .locals 1

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/entity/CheckOrderEntity;->source:Ljava/lang/String;

    return-object v0
.end method

.method public getTotal_fee()Ljava/lang/String;
    .locals 1

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/entity/CheckOrderEntity;->total_fee:Ljava/lang/String;

    return-object v0
.end method

.method public getTrans_no()Ljava/lang/String;
    .locals 1

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/entity/CheckOrderEntity;->trans_no:Ljava/lang/String;

    return-object v0
.end method

.method public getUserid()Ljava/lang/String;
    .locals 1

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/entity/CheckOrderEntity;->userid:Ljava/lang/String;

    return-object v0
.end method

.method public setChannel_id(I)V
    .locals 0

    .line 1
    iput p1, p0, Lcom/bianfeng/ymnsdk/entity/CheckOrderEntity;->channel_id:I

    return-void
.end method

.method public setClient_ip(Ljava/lang/String;)V
    .locals 0

    .line 1
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/entity/CheckOrderEntity;->client_ip:Ljava/lang/String;

    return-void
.end method

.method public setCreated_at(Ljava/lang/String;)V
    .locals 0

    .line 1
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/entity/CheckOrderEntity;->created_at:Ljava/lang/String;

    return-void
.end method

.method public setDeliver_status(I)V
    .locals 0

    .line 1
    iput p1, p0, Lcom/bianfeng/ymnsdk/entity/CheckOrderEntity;->deliver_status:I

    return-void
.end method

.method public setDiscount(I)V
    .locals 0

    .line 1
    iput p1, p0, Lcom/bianfeng/ymnsdk/entity/CheckOrderEntity;->discount:I

    return-void
.end method

.method public setFrom_type(I)V
    .locals 0

    .line 1
    iput p1, p0, Lcom/bianfeng/ymnsdk/entity/CheckOrderEntity;->from_type:I

    return-void
.end method

.method public setInst_id(I)V
    .locals 0

    .line 1
    iput p1, p0, Lcom/bianfeng/ymnsdk/entity/CheckOrderEntity;->inst_id:I

    return-void
.end method

.method public setIs_test(I)V
    .locals 0

    .line 1
    iput p1, p0, Lcom/bianfeng/ymnsdk/entity/CheckOrderEntity;->is_test:I

    return-void
.end method

.method public setItem_code(Ljava/lang/String;)V
    .locals 0

    .line 1
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/entity/CheckOrderEntity;->item_code:Ljava/lang/String;

    return-void
.end method

.method public setItem_qty(I)V
    .locals 0

    .line 1
    iput p1, p0, Lcom/bianfeng/ymnsdk/entity/CheckOrderEntity;->item_qty:I

    return-void
.end method

.method public setNumid(Ljava/lang/String;)V
    .locals 0

    .line 1
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/entity/CheckOrderEntity;->numid:Ljava/lang/String;

    return-void
.end method

.method public setOrder_no(Ljava/lang/String;)V
    .locals 0

    .line 1
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/entity/CheckOrderEntity;->order_no:Ljava/lang/String;

    return-void
.end method

.method public setPar_value(Ljava/lang/String;)V
    .locals 0

    .line 1
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/entity/CheckOrderEntity;->par_value:Ljava/lang/String;

    return-void
.end method

.method public setPay_attach(Ljava/lang/String;)V
    .locals 0

    .line 1
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/entity/CheckOrderEntity;->pay_attach:Ljava/lang/String;

    return-void
.end method

.method public setPay_status(I)V
    .locals 0

    .line 1
    iput p1, p0, Lcom/bianfeng/ymnsdk/entity/CheckOrderEntity;->pay_status:I

    return-void
.end method

.method public setRewards(Ljava/lang/Object;)V
    .locals 0

    .line 1
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/entity/CheckOrderEntity;->rewards:Ljava/lang/Object;

    return-void
.end method

.method public setSource(Ljava/lang/String;)V
    .locals 0

    .line 1
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/entity/CheckOrderEntity;->source:Ljava/lang/String;

    return-void
.end method

.method public setTotal_fee(Ljava/lang/String;)V
    .locals 0

    .line 1
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/entity/CheckOrderEntity;->total_fee:Ljava/lang/String;

    return-void
.end method

.method public setTrans_no(Ljava/lang/String;)V
    .locals 0

    .line 1
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/entity/CheckOrderEntity;->trans_no:Ljava/lang/String;

    return-void
.end method

.method public setUserid(Ljava/lang/String;)V
    .locals 0

    .line 1
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/entity/CheckOrderEntity;->userid:Ljava/lang/String;

    return-void
.end method

.method public toString()Ljava/lang/String;
    .locals 1

    .line 1
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/util/thridsdk/YmnGsonUtil;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
