.class public final enum Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;
.super Ljava/lang/Enum;

# interfaces
.implements Lcom/czhj/wire/WireEnum;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/czhj/wire/protobuf/FieldDescriptorProto;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x4019
    name = "Type"
.end annotation

.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type$ProtoAdapter_Type;
    }
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Enum<",
        "Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;",
        ">;",
        "Lcom/czhj/wire/WireEnum;"
    }
.end annotation


# static fields
.field private static final synthetic $VALUES:[Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;

.field public static final ADAPTER:Lcom/czhj/wire/ProtoAdapter;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Lcom/czhj/wire/ProtoAdapter<",
            "Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;",
            ">;"
        }
    .end annotation
.end field

.field public static final enum TYPE_BOOL:Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;

.field public static final enum TYPE_BYTES:Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;

.field public static final enum TYPE_DOUBLE:Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;

.field public static final enum TYPE_ENUM:Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;

.field public static final enum TYPE_FIXED32:Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;

.field public static final enum TYPE_FIXED64:Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;

.field public static final enum TYPE_FLOAT:Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;

.field public static final enum TYPE_GROUP:Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;

.field public static final enum TYPE_INT32:Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;

.field public static final enum TYPE_INT64:Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;

.field public static final enum TYPE_MESSAGE:Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;

.field public static final enum TYPE_SFIXED32:Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;

.field public static final enum TYPE_SFIXED64:Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;

.field public static final enum TYPE_SINT32:Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;

.field public static final enum TYPE_SINT64:Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;

.field public static final enum TYPE_STRING:Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;

.field public static final enum TYPE_UINT32:Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;

.field public static final enum TYPE_UINT64:Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;


# instance fields
.field private final value:I


# direct methods
.method static constructor <clinit>()V
    .locals 16

    new-instance v0, Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;

    const/4 v1, 0x0

    const/4 v2, 0x1

    const-string v3, "TYPE_DOUBLE"

    invoke-direct {v0, v3, v1, v2}, Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;-><init>(Ljava/lang/String;II)V

    sput-object v0, Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;->TYPE_DOUBLE:Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;

    new-instance v0, Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;

    const/4 v3, 0x2

    const-string v4, "TYPE_FLOAT"

    invoke-direct {v0, v4, v2, v3}, Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;-><init>(Ljava/lang/String;II)V

    sput-object v0, Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;->TYPE_FLOAT:Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;

    new-instance v0, Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;

    const/4 v4, 0x3

    const-string v5, "TYPE_INT64"

    invoke-direct {v0, v5, v3, v4}, Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;-><init>(Ljava/lang/String;II)V

    sput-object v0, Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;->TYPE_INT64:Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;

    new-instance v0, Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;

    const/4 v5, 0x4

    const-string v6, "TYPE_UINT64"

    invoke-direct {v0, v6, v4, v5}, Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;-><init>(Ljava/lang/String;II)V

    sput-object v0, Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;->TYPE_UINT64:Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;

    new-instance v0, Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;

    const/4 v6, 0x5

    const-string v7, "TYPE_INT32"

    invoke-direct {v0, v7, v5, v6}, Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;-><init>(Ljava/lang/String;II)V

    sput-object v0, Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;->TYPE_INT32:Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;

    new-instance v0, Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;

    const/4 v7, 0x6

    const-string v8, "TYPE_FIXED64"

    invoke-direct {v0, v8, v6, v7}, Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;-><init>(Ljava/lang/String;II)V

    sput-object v0, Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;->TYPE_FIXED64:Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;

    new-instance v0, Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;

    const/4 v8, 0x7

    const-string v9, "TYPE_FIXED32"

    invoke-direct {v0, v9, v7, v8}, Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;-><init>(Ljava/lang/String;II)V

    sput-object v0, Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;->TYPE_FIXED32:Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;

    new-instance v0, Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;

    const/16 v9, 0x8

    const-string v10, "TYPE_BOOL"

    invoke-direct {v0, v10, v8, v9}, Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;-><init>(Ljava/lang/String;II)V

    sput-object v0, Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;->TYPE_BOOL:Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;

    new-instance v0, Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;

    const/16 v10, 0x9

    const-string v11, "TYPE_STRING"

    invoke-direct {v0, v11, v9, v10}, Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;-><init>(Ljava/lang/String;II)V

    sput-object v0, Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;->TYPE_STRING:Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;

    new-instance v0, Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;

    const/16 v11, 0xa

    const-string v12, "TYPE_GROUP"

    invoke-direct {v0, v12, v10, v11}, Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;-><init>(Ljava/lang/String;II)V

    sput-object v0, Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;->TYPE_GROUP:Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;

    new-instance v0, Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;

    const/16 v12, 0xb

    const-string v13, "TYPE_MESSAGE"

    invoke-direct {v0, v13, v11, v12}, Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;-><init>(Ljava/lang/String;II)V

    sput-object v0, Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;->TYPE_MESSAGE:Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;

    new-instance v0, Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;

    const/16 v13, 0xc

    const-string v14, "TYPE_BYTES"

    invoke-direct {v0, v14, v12, v13}, Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;-><init>(Ljava/lang/String;II)V

    sput-object v0, Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;->TYPE_BYTES:Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;

    new-instance v0, Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;

    const/16 v14, 0xd

    const-string v15, "TYPE_UINT32"

    invoke-direct {v0, v15, v13, v14}, Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;-><init>(Ljava/lang/String;II)V

    sput-object v0, Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;->TYPE_UINT32:Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;

    new-instance v0, Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;

    const/16 v15, 0xe

    const-string v13, "TYPE_ENUM"

    invoke-direct {v0, v13, v14, v15}, Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;-><init>(Ljava/lang/String;II)V

    sput-object v0, Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;->TYPE_ENUM:Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;

    new-instance v0, Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;

    const/16 v13, 0xf

    const-string v14, "TYPE_SFIXED32"

    invoke-direct {v0, v14, v15, v13}, Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;-><init>(Ljava/lang/String;II)V

    sput-object v0, Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;->TYPE_SFIXED32:Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;

    new-instance v0, Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;

    const/16 v14, 0x10

    const-string v15, "TYPE_SFIXED64"

    invoke-direct {v0, v15, v13, v14}, Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;-><init>(Ljava/lang/String;II)V

    sput-object v0, Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;->TYPE_SFIXED64:Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;

    new-instance v0, Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;

    const/16 v15, 0x11

    const-string v13, "TYPE_SINT32"

    invoke-direct {v0, v13, v14, v15}, Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;-><init>(Ljava/lang/String;II)V

    sput-object v0, Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;->TYPE_SINT32:Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;

    new-instance v0, Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;

    const/16 v13, 0x12

    const-string v14, "TYPE_SINT64"

    invoke-direct {v0, v14, v15, v13}, Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;-><init>(Ljava/lang/String;II)V

    sput-object v0, Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;->TYPE_SINT64:Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;

    new-array v13, v13, [Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;

    sget-object v14, Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;->TYPE_DOUBLE:Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;

    aput-object v14, v13, v1

    sget-object v1, Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;->TYPE_FLOAT:Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;

    aput-object v1, v13, v2

    sget-object v1, Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;->TYPE_INT64:Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;

    aput-object v1, v13, v3

    sget-object v1, Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;->TYPE_UINT64:Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;

    aput-object v1, v13, v4

    sget-object v1, Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;->TYPE_INT32:Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;

    aput-object v1, v13, v5

    sget-object v1, Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;->TYPE_FIXED64:Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;

    aput-object v1, v13, v6

    sget-object v1, Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;->TYPE_FIXED32:Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;

    aput-object v1, v13, v7

    sget-object v1, Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;->TYPE_BOOL:Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;

    aput-object v1, v13, v8

    sget-object v1, Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;->TYPE_STRING:Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;

    aput-object v1, v13, v9

    sget-object v1, Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;->TYPE_GROUP:Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;

    aput-object v1, v13, v10

    sget-object v1, Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;->TYPE_MESSAGE:Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;

    aput-object v1, v13, v11

    sget-object v1, Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;->TYPE_BYTES:Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;

    aput-object v1, v13, v12

    sget-object v1, Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;->TYPE_UINT32:Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;

    const/16 v2, 0xc

    aput-object v1, v13, v2

    sget-object v1, Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;->TYPE_ENUM:Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;

    const/16 v2, 0xd

    aput-object v1, v13, v2

    sget-object v1, Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;->TYPE_SFIXED32:Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;

    const/16 v2, 0xe

    aput-object v1, v13, v2

    sget-object v1, Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;->TYPE_SFIXED64:Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;

    const/16 v2, 0xf

    aput-object v1, v13, v2

    sget-object v1, Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;->TYPE_SINT32:Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;

    const/16 v2, 0x10

    aput-object v1, v13, v2

    aput-object v0, v13, v15

    sput-object v13, Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;->$VALUES:[Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;

    new-instance v0, Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type$ProtoAdapter_Type;

    invoke-direct {v0}, Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type$ProtoAdapter_Type;-><init>()V

    sput-object v0, Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    return-void
.end method

.method private constructor <init>(Ljava/lang/String;II)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(I)V"
        }
    .end annotation

    invoke-direct {p0, p1, p2}, Ljava/lang/Enum;-><init>(Ljava/lang/String;I)V

    iput p3, p0, Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;->value:I

    return-void
.end method

.method public static fromValue(I)Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;
    .locals 0

    packed-switch p0, :pswitch_data_0

    const/4 p0, 0x0

    return-object p0

    :pswitch_0
    sget-object p0, Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;->TYPE_SINT64:Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;

    return-object p0

    :pswitch_1
    sget-object p0, Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;->TYPE_SINT32:Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;

    return-object p0

    :pswitch_2
    sget-object p0, Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;->TYPE_SFIXED64:Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;

    return-object p0

    :pswitch_3
    sget-object p0, Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;->TYPE_SFIXED32:Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;

    return-object p0

    :pswitch_4
    sget-object p0, Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;->TYPE_ENUM:Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;

    return-object p0

    :pswitch_5
    sget-object p0, Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;->TYPE_UINT32:Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;

    return-object p0

    :pswitch_6
    sget-object p0, Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;->TYPE_BYTES:Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;

    return-object p0

    :pswitch_7
    sget-object p0, Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;->TYPE_MESSAGE:Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;

    return-object p0

    :pswitch_8
    sget-object p0, Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;->TYPE_GROUP:Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;

    return-object p0

    :pswitch_9
    sget-object p0, Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;->TYPE_STRING:Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;

    return-object p0

    :pswitch_a
    sget-object p0, Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;->TYPE_BOOL:Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;

    return-object p0

    :pswitch_b
    sget-object p0, Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;->TYPE_FIXED32:Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;

    return-object p0

    :pswitch_c
    sget-object p0, Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;->TYPE_FIXED64:Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;

    return-object p0

    :pswitch_d
    sget-object p0, Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;->TYPE_INT32:Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;

    return-object p0

    :pswitch_e
    sget-object p0, Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;->TYPE_UINT64:Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;

    return-object p0

    :pswitch_f
    sget-object p0, Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;->TYPE_INT64:Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;

    return-object p0

    :pswitch_10
    sget-object p0, Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;->TYPE_FLOAT:Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;

    return-object p0

    :pswitch_11
    sget-object p0, Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;->TYPE_DOUBLE:Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;

    return-object p0

    nop

    :pswitch_data_0
    .packed-switch 0x1
        :pswitch_11
        :pswitch_10
        :pswitch_f
        :pswitch_e
        :pswitch_d
        :pswitch_c
        :pswitch_b
        :pswitch_a
        :pswitch_9
        :pswitch_8
        :pswitch_7
        :pswitch_6
        :pswitch_5
        :pswitch_4
        :pswitch_3
        :pswitch_2
        :pswitch_1
        :pswitch_0
    .end packed-switch
.end method

.method public static valueOf(Ljava/lang/String;)Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;
    .locals 1

    const-class v0, Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;

    invoke-static {v0, p0}, Ljava/lang/Enum;->valueOf(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Enum;

    move-result-object p0

    check-cast p0, Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;

    return-object p0
.end method

.method public static values()[Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;
    .locals 1

    sget-object v0, Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;->$VALUES:[Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;

    invoke-virtual {v0}, [Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;->clone()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, [Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;

    return-object v0
.end method


# virtual methods
.method public getValue()I
    .locals 1

    iget v0, p0, Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;->value:I

    return v0
.end method
