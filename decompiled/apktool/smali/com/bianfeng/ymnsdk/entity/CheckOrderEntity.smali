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

    .line 5
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public getChannel_id()I
    .locals 1

    .line 53
    iget v0, p0, Lcom/bianfeng/ymnsdk/entity/CheckOrderEntity;->channel_id:I

    return v0
.end method

.method public getClient_ip()Ljava/lang/String;
    .locals 1

    .line 61
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/entity/CheckOrderEntity;->client_ip:Ljava/lang/String;

    return-object v0
.end method

.method public getCreated_at()Ljava/lang/String;
    .locals 1

    .line 69
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/entity/CheckOrderEntity;->created_at:Ljava/lang/String;

    return-object v0
.end method

.method public getDeliver_status()I
    .locals 1

    .line 77
    iget v0, p0, Lcom/bianfeng/ymnsdk/entity/CheckOrderEntity;->deliver_status:I

    return v0
.end method

.method public getDiscount()I
    .locals 1

    .line 85
    iget v0, p0, Lcom/bianfeng/ymnsdk/entity/CheckOrderEntity;->discount:I

    return v0
.end method

.method public getFrom_type()I
    .locals 1

    .line 93
    iget v0, p0, Lcom/bianfeng/ymnsdk/entity/CheckOrderEntity;->from_type:I

    return v0
.end method

.method public getInst_id()I
    .locals 1

    .line 101
    iget v0, p0, Lcom/bianfeng/ymnsdk/entity/CheckOrderEntity;->inst_id:I

    return v0
.end method

.method public getIs_test()I
    .locals 1

    .line 109
    iget v0, p0, Lcom/bianfeng/ymnsdk/entity/CheckOrderEntity;->is_test:I

    return v0
.end method

.method public getItem_code()Ljava/lang/String;
    .locals 1

    .line 117
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/entity/CheckOrderEntity;->item_code:Ljava/lang/String;

    return-object v0
.end method

.method public getItem_qty()I
    .locals 1

    .line 125
    iget v0, p0, Lcom/bianfeng/ymnsdk/entity/CheckOrderEntity;->item_qty:I

    return v0
.end method

.method public getNumid()Ljava/lang/String;
    .locals 1

    .line 133
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/entity/CheckOrderEntity;->numid:Ljava/lang/String;

    return-object v0
.end method

.method public getOrder_no()Ljava/lang/String;
    .locals 1

    .line 141
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/entity/CheckOrderEntity;->order_no:Ljava/lang/String;

    return-object v0
.end method

.method public getPar_value()Ljava/lang/String;
    .locals 1

    .line 149
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/entity/CheckOrderEntity;->par_value:Ljava/lang/String;

    return-object v0
.end method

.method public getPay_attach()Ljava/lang/String;
    .locals 1

    .line 157
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/entity/CheckOrderEntity;->pay_attach:Ljava/lang/String;

    return-object v0
.end method

.method public getPay_status()I
    .locals 1

    .line 165
    iget v0, p0, Lcom/bianfeng/ymnsdk/entity/CheckOrderEntity;->pay_status:I

    return v0
.end method

.method public getRewards()Ljava/lang/Object;
    .locals 1

    .line 173
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/entity/CheckOrderEntity;->rewards:Ljava/lang/Object;

    return-object v0
.end method

.method public getSource()Ljava/lang/String;
    .locals 1

    .line 181
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/entity/CheckOrderEntity;->source:Ljava/lang/String;

    return-object v0
.end method

.method public getTotal_fee()Ljava/lang/String;
    .locals 1

    .line 189
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/entity/CheckOrderEntity;->total_fee:Ljava/lang/String;

    return-object v0
.end method

.method public getTrans_no()Ljava/lang/String;
    .locals 1

    .line 197
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/entity/CheckOrderEntity;->trans_no:Ljava/lang/String;

    return-object v0
.end method

.method public getUserid()Ljava/lang/String;
    .locals 1

    .line 205
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/entity/CheckOrderEntity;->userid:Ljava/lang/String;

    return-object v0
.end method

.method public setChannel_id(I)V
    .locals 0
    .param p1, "channel_id"    # I

    .line 57
    iput p1, p0, Lcom/bianfeng/ymnsdk/entity/CheckOrderEntity;->channel_id:I

    .line 58
    return-void
.end method

.method public setClient_ip(Ljava/lang/String;)V
    .locals 0
    .param p1, "client_ip"    # Ljava/lang/String;

    .line 65
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/entity/CheckOrderEntity;->client_ip:Ljava/lang/String;

    .line 66
    return-void
.end method

.method public setCreated_at(Ljava/lang/String;)V
    .locals 0
    .param p1, "created_at"    # Ljava/lang/String;

    .line 73
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/entity/CheckOrderEntity;->created_at:Ljava/lang/String;

    .line 74
    return-void
.end method

.method public setDeliver_status(I)V
    .locals 0
    .param p1, "deliver_status"    # I

    .line 81
    iput p1, p0, Lcom/bianfeng/ymnsdk/entity/CheckOrderEntity;->deliver_status:I

    .line 82
    return-void
.end method

.method public setDiscount(I)V
    .locals 0
    .param p1, "discount"    # I

    .line 89
    iput p1, p0, Lcom/bianfeng/ymnsdk/entity/CheckOrderEntity;->discount:I

    .line 90
    return-void
.end method

.method public setFrom_type(I)V
    .locals 0
    .param p1, "from_type"    # I

    .line 97
    iput p1, p0, Lcom/bianfeng/ymnsdk/entity/CheckOrderEntity;->from_type:I

    .line 98
    return-void
.end method

.method public setInst_id(I)V
    .locals 0
    .param p1, "inst_id"    # I

    .line 105
    iput p1, p0, Lcom/bianfeng/ymnsdk/entity/CheckOrderEntity;->inst_id:I

    .line 106
    return-void
.end method

.method public setIs_test(I)V
    .locals 0
    .param p1, "is_test"    # I

    .line 113
    iput p1, p0, Lcom/bianfeng/ymnsdk/entity/CheckOrderEntity;->is_test:I

    .line 114
    return-void
.end method

.method public setItem_code(Ljava/lang/String;)V
    .locals 0
    .param p1, "item_code"    # Ljava/lang/String;

    .line 121
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/entity/CheckOrderEntity;->item_code:Ljava/lang/String;

    .line 122
    return-void
.end method

.method public setItem_qty(I)V
    .locals 0
    .param p1, "item_qty"    # I

    .line 129
    iput p1, p0, Lcom/bianfeng/ymnsdk/entity/CheckOrderEntity;->item_qty:I

    .line 130
    return-void
.end method

.method public setNumid(Ljava/lang/String;)V
    .locals 0
    .param p1, "numid"    # Ljava/lang/String;

    .line 137
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/entity/CheckOrderEntity;->numid:Ljava/lang/String;

    .line 138
    return-void
.end method

.method public setOrder_no(Ljava/lang/String;)V
    .locals 0
    .param p1, "order_no"    # Ljava/lang/String;

    .line 145
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/entity/CheckOrderEntity;->order_no:Ljava/lang/String;

    .line 146
    return-void
.end method

.method public setPar_value(Ljava/lang/String;)V
    .locals 0
    .param p1, "par_value"    # Ljava/lang/String;

    .line 153
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/entity/CheckOrderEntity;->par_value:Ljava/lang/String;

    .line 154
    return-void
.end method

.method public setPay_attach(Ljava/lang/String;)V
    .locals 0
    .param p1, "pay_attach"    # Ljava/lang/String;

    .line 161
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/entity/CheckOrderEntity;->pay_attach:Ljava/lang/String;

    .line 162
    return-void
.end method

.method public setPay_status(I)V
    .locals 0
    .param p1, "pay_status"    # I

    .line 169
    iput p1, p0, Lcom/bianfeng/ymnsdk/entity/CheckOrderEntity;->pay_status:I

    .line 170
    return-void
.end method

.method public setRewards(Ljava/lang/Object;)V
    .locals 0
    .param p1, "rewards"    # Ljava/lang/Object;

    .line 177
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/entity/CheckOrderEntity;->rewards:Ljava/lang/Object;

    .line 178
    return-void
.end method

.method public setSource(Ljava/lang/String;)V
    .locals 0
    .param p1, "source"    # Ljava/lang/String;

    .line 185
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/entity/CheckOrderEntity;->source:Ljava/lang/String;

    .line 186
    return-void
.end method

.method public setTotal_fee(Ljava/lang/String;)V
    .locals 0
    .param p1, "total_fee"    # Ljava/lang/String;

    .line 193
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/entity/CheckOrderEntity;->total_fee:Ljava/lang/String;

    .line 194
    return-void
.end method

.method public setTrans_no(Ljava/lang/String;)V
    .locals 0
    .param p1, "trans_no"    # Ljava/lang/String;

    .line 201
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/entity/CheckOrderEntity;->trans_no:Ljava/lang/String;

    .line 202
    return-void
.end method

.method public setUserid(Ljava/lang/String;)V
    .locals 0
    .param p1, "userid"    # Ljava/lang/String;

    .line 209
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/entity/CheckOrderEntity;->userid:Ljava/lang/String;

    .line 210
    return-void
.end method

.method public toString()Ljava/lang/String;
    .locals 1

    .line 214
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/util/thridsdk/YmnGsonUtil;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
