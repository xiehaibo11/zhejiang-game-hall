.class public Lcom/igexin/push/util/b;
.super Ljava/lang/Object;


# static fields
.field private static volatile a:Ljava/lang/Boolean;


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public static a(Ljava/lang/String;I)Landroid/content/Intent;
    .locals 17

    move-object/from16 v1, p0

    const-string v0, "android-app:"

    const/4 v2, 0x0

    :try_start_0
    invoke-virtual {v1, v0}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v3
    :try_end_0
    .catch Ljava/lang/IndexOutOfBoundsException; {:try_start_0 .. :try_end_0} :catch_3

    and-int/lit8 v4, p1, 0x3

    const-string v5, "intent:"

    const-string v6, "android.intent.action.VIEW"

    if-eqz v4, :cond_0

    :try_start_1
    invoke-virtual {v1, v5}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v4

    if-nez v4, :cond_0

    if-nez v3, :cond_0

    new-instance v0, Landroid/content/Intent;

    invoke-direct {v0, v6}, Landroid/content/Intent;-><init>(Ljava/lang/String;)V
    :try_end_1
    .catch Ljava/lang/IndexOutOfBoundsException; {:try_start_1 .. :try_end_1} :catch_4

    :try_start_2
    invoke-static/range {p0 .. p0}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object v3

    invoke-virtual {v0, v3}, Landroid/content/Intent;->setData(Landroid/net/Uri;)Landroid/content/Intent;
    :try_end_2
    .catch Ljava/lang/IllegalArgumentException; {:try_start_2 .. :try_end_2} :catch_0
    .catch Ljava/lang/IndexOutOfBoundsException; {:try_start_2 .. :try_end_2} :catch_4

    return-object v0

    :catch_0
    move-exception v0

    :try_start_3
    new-instance v3, Ljava/net/URISyntaxException;

    invoke-virtual {v0}, Ljava/lang/IllegalArgumentException;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-direct {v3, v1, v0}, Ljava/net/URISyntaxException;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    throw v3
    :try_end_3
    .catch Ljava/lang/IndexOutOfBoundsException; {:try_start_3 .. :try_end_3} :catch_4

    :cond_0
    :try_start_4
    const-string v4, "#"

    invoke-virtual {v1, v4}, Ljava/lang/String;->lastIndexOf(Ljava/lang/String;)I

    move-result v4
    :try_end_4
    .catch Ljava/lang/IndexOutOfBoundsException; {:try_start_4 .. :try_end_4} :catch_3

    const/4 v7, -0x1

    if-ne v4, v7, :cond_1

    if-nez v3, :cond_3

    :try_start_5
    new-instance v0, Landroid/content/Intent;

    invoke-static/range {p0 .. p0}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object v2

    invoke-direct {v0, v6, v2}, Landroid/content/Intent;-><init>(Ljava/lang/String;Landroid/net/Uri;)V

    return-object v0

    :cond_1
    const-string v8, "#Intent;"

    invoke-virtual {v1, v8, v4}, Ljava/lang/String;->startsWith(Ljava/lang/String;I)Z

    move-result v8

    if-nez v8, :cond_3

    if-nez v3, :cond_2

    invoke-static/range {p0 .. p1}, Lcom/igexin/push/util/b;->b(Ljava/lang/String;I)Landroid/content/Intent;

    move-result-object v0

    return-object v0

    :cond_2
    move v4, v7

    :cond_3
    new-instance v3, Landroid/content/Intent;

    invoke-direct {v3, v6}, Landroid/content/Intent;-><init>(Ljava/lang/String;)V

    if-ltz v4, :cond_4

    invoke-virtual {v1, v2, v4}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v6

    add-int/lit8 v4, v4, 0x8

    goto :goto_0

    :cond_4
    move-object v6, v1

    :goto_0
    invoke-virtual {v3}, Landroid/content/Intent;->getExtras()Landroid/os/Bundle;

    move-result-object v7

    if-nez v7, :cond_5

    new-instance v7, Landroid/os/Bundle;

    invoke-direct {v7}, Landroid/os/Bundle;-><init>()V

    invoke-virtual {v3, v7}, Landroid/content/Intent;->putExtras(Landroid/os/Bundle;)Landroid/content/Intent;

    :cond_5
    invoke-virtual {v3}, Landroid/content/Intent;->getExtras()Landroid/os/Bundle;

    move-result-object v7
    :try_end_5
    .catch Ljava/lang/IndexOutOfBoundsException; {:try_start_5 .. :try_end_5} :catch_2

    move v10, v2

    move v12, v10

    move-object v9, v3

    const/4 v11, 0x0

    :goto_1
    const-string v13, ":"

    const-string v14, ""

    if-ltz v4, :cond_1e

    :try_start_6
    const-string v15, "end"

    invoke-virtual {v1, v15, v4}, Ljava/lang/String;->startsWith(Ljava/lang/String;I)Z

    move-result v15

    if-nez v15, :cond_1e

    const/16 v15, 0x3d

    invoke-virtual {v1, v15, v4}, Ljava/lang/String;->indexOf(II)I

    move-result v15

    if-gez v15, :cond_6

    add-int/lit8 v15, v4, -0x1

    :cond_6
    const/16 v8, 0x3b

    invoke-virtual {v1, v8, v4}, Ljava/lang/String;->indexOf(II)I

    move-result v8

    if-ge v15, v8, :cond_7

    add-int/lit8 v14, v15, 0x1

    invoke-virtual {v1, v14, v8}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v14

    invoke-static {v14}, Landroid/net/Uri;->decode(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v14

    :cond_7
    const-string v2, "action="

    invoke-virtual {v1, v2, v4}, Ljava/lang/String;->startsWith(Ljava/lang/String;I)Z

    move-result v2

    const/16 v16, 0x1

    if-eqz v2, :cond_9

    invoke-virtual {v9, v14}, Landroid/content/Intent;->setAction(Ljava/lang/String;)Landroid/content/Intent;

    if-nez v10, :cond_8

    move/from16 v12, v16

    :cond_8
    :goto_2
    const/4 v13, 0x0

    goto/16 :goto_4

    :cond_9
    const-string v2, "category="

    invoke-virtual {v1, v2, v4}, Ljava/lang/String;->startsWith(Ljava/lang/String;I)Z

    move-result v2

    if-eqz v2, :cond_a

    invoke-virtual {v9, v14}, Landroid/content/Intent;->addCategory(Ljava/lang/String;)Landroid/content/Intent;

    goto :goto_2

    :cond_a
    const-string v2, "type="

    invoke-virtual {v1, v2, v4}, Ljava/lang/String;->startsWith(Ljava/lang/String;I)Z

    move-result v2

    if-eqz v2, :cond_b

    invoke-virtual {v9, v14}, Landroid/content/Intent;->setType(Ljava/lang/String;)Landroid/content/Intent;

    goto :goto_2

    :cond_b
    const-string v2, "launchFlags="

    invoke-virtual {v1, v2, v4}, Ljava/lang/String;->startsWith(Ljava/lang/String;I)Z

    move-result v2

    if-eqz v2, :cond_e

    invoke-static {v14}, Ljava/lang/Integer;->decode(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/Integer;->intValue()I

    move-result v2

    invoke-virtual {v9, v2}, Landroid/content/Intent;->setFlags(I)Landroid/content/Intent;

    and-int/lit8 v2, p1, 0x4

    if-nez v2, :cond_8

    sget v2, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v13, 0x13

    if-lt v2, v13, :cond_c

    const/16 v2, 0x43

    goto :goto_3

    :cond_c
    const/4 v2, 0x3

    :goto_3
    sget v13, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v14, 0x15

    if-lt v13, v14, :cond_d

    or-int/lit16 v2, v2, 0x80

    :cond_d
    invoke-virtual {v9}, Landroid/content/Intent;->getFlags()I

    move-result v13

    not-int v2, v2

    and-int/2addr v2, v13

    invoke-virtual {v9, v2}, Landroid/content/Intent;->setFlags(I)Landroid/content/Intent;

    goto :goto_2

    :cond_e
    const-string v2, "package="

    invoke-virtual {v1, v2, v4}, Ljava/lang/String;->startsWith(Ljava/lang/String;I)Z

    move-result v2

    if-eqz v2, :cond_f

    invoke-virtual {v9, v14}, Landroid/content/Intent;->setPackage(Ljava/lang/String;)Landroid/content/Intent;

    goto :goto_2

    :cond_f
    const-string v2, "component="

    invoke-virtual {v1, v2, v4}, Ljava/lang/String;->startsWith(Ljava/lang/String;I)Z

    move-result v2

    if-eqz v2, :cond_10

    invoke-static {v14}, Landroid/content/ComponentName;->unflattenFromString(Ljava/lang/String;)Landroid/content/ComponentName;

    move-result-object v2

    invoke-virtual {v9, v2}, Landroid/content/Intent;->setComponent(Landroid/content/ComponentName;)Landroid/content/Intent;

    goto :goto_2

    :cond_10
    const-string v2, "scheme="

    invoke-virtual {v1, v2, v4}, Ljava/lang/String;->startsWith(Ljava/lang/String;I)Z

    move-result v2

    if-eqz v2, :cond_12

    if-eqz v10, :cond_11

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object v2

    invoke-virtual {v9, v2}, Landroid/content/Intent;->setData(Landroid/net/Uri;)Landroid/content/Intent;

    goto/16 :goto_2

    :cond_11
    move-object v11, v14

    goto/16 :goto_2

    :cond_12
    const-string v2, "sourceBounds="

    invoke-virtual {v1, v2, v4}, Ljava/lang/String;->startsWith(Ljava/lang/String;I)Z

    move-result v2

    if-eqz v2, :cond_13

    invoke-static {v14}, Landroid/graphics/Rect;->unflattenFromString(Ljava/lang/String;)Landroid/graphics/Rect;

    move-result-object v2

    invoke-virtual {v9, v2}, Landroid/content/Intent;->setSourceBounds(Landroid/graphics/Rect;)V

    goto/16 :goto_2

    :cond_13
    add-int/lit8 v2, v4, 0x3

    if-ne v8, v2, :cond_14

    const-string v2, "SEL"

    invoke-virtual {v1, v2, v4}, Ljava/lang/String;->startsWith(Ljava/lang/String;I)Z

    move-result v2

    if-eqz v2, :cond_14

    new-instance v9, Landroid/content/Intent;

    invoke-direct {v9}, Landroid/content/Intent;-><init>()V

    move/from16 v10, v16

    goto/16 :goto_2

    :cond_14
    add-int/lit8 v2, v4, 0x2

    invoke-virtual {v1, v2, v15}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Landroid/net/Uri;->decode(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    const-string v13, "S."

    invoke-virtual {v1, v13, v4}, Ljava/lang/String;->startsWith(Ljava/lang/String;I)Z

    move-result v13

    if-eqz v13, :cond_15

    invoke-virtual {v7, v2, v14}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    goto/16 :goto_2

    :cond_15
    const-string v13, "B."

    invoke-virtual {v1, v13, v4}, Ljava/lang/String;->startsWith(Ljava/lang/String;I)Z

    move-result v13

    if-eqz v13, :cond_16

    invoke-static {v14}, Ljava/lang/Boolean;->parseBoolean(Ljava/lang/String;)Z

    move-result v13

    invoke-virtual {v7, v2, v13}, Landroid/os/Bundle;->putBoolean(Ljava/lang/String;Z)V

    goto/16 :goto_2

    :cond_16
    const-string v13, "b."

    invoke-virtual {v1, v13, v4}, Ljava/lang/String;->startsWith(Ljava/lang/String;I)Z

    move-result v13

    if-eqz v13, :cond_17

    invoke-static {v14}, Ljava/lang/Byte;->parseByte(Ljava/lang/String;)B

    move-result v13

    invoke-virtual {v7, v2, v13}, Landroid/os/Bundle;->putByte(Ljava/lang/String;B)V

    goto/16 :goto_2

    :cond_17
    const-string v13, "c."

    invoke-virtual {v1, v13, v4}, Ljava/lang/String;->startsWith(Ljava/lang/String;I)Z

    move-result v13

    if-eqz v13, :cond_18

    const/4 v13, 0x0

    invoke-virtual {v14, v13}, Ljava/lang/String;->charAt(I)C

    move-result v14

    invoke-virtual {v7, v2, v14}, Landroid/os/Bundle;->putChar(Ljava/lang/String;C)V

    goto :goto_4

    :cond_18
    const/4 v13, 0x0

    const-string v15, "d."

    invoke-virtual {v1, v15, v4}, Ljava/lang/String;->startsWith(Ljava/lang/String;I)Z

    move-result v15

    if-eqz v15, :cond_19

    invoke-static {v14}, Ljava/lang/Double;->parseDouble(Ljava/lang/String;)D

    move-result-wide v14

    invoke-virtual {v7, v2, v14, v15}, Landroid/os/Bundle;->putDouble(Ljava/lang/String;D)V

    goto :goto_4

    :cond_19
    const-string v15, "f."

    invoke-virtual {v1, v15, v4}, Ljava/lang/String;->startsWith(Ljava/lang/String;I)Z

    move-result v15

    if-eqz v15, :cond_1a

    invoke-static {v14}, Ljava/lang/Float;->parseFloat(Ljava/lang/String;)F

    move-result v14

    invoke-virtual {v7, v2, v14}, Landroid/os/Bundle;->putFloat(Ljava/lang/String;F)V

    goto :goto_4

    :cond_1a
    const-string v15, "i."

    invoke-virtual {v1, v15, v4}, Ljava/lang/String;->startsWith(Ljava/lang/String;I)Z

    move-result v15

    if-eqz v15, :cond_1b

    invoke-static {v14}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v14

    invoke-virtual {v7, v2, v14}, Landroid/os/Bundle;->putInt(Ljava/lang/String;I)V

    goto :goto_4

    :cond_1b
    const-string v15, "l."

    invoke-virtual {v1, v15, v4}, Ljava/lang/String;->startsWith(Ljava/lang/String;I)Z

    move-result v15

    if-eqz v15, :cond_1c

    invoke-static {v14}, Ljava/lang/Long;->parseLong(Ljava/lang/String;)J

    move-result-wide v14

    invoke-virtual {v7, v2, v14, v15}, Landroid/os/Bundle;->putLong(Ljava/lang/String;J)V

    goto :goto_4

    :cond_1c
    const-string v15, "s."

    invoke-virtual {v1, v15, v4}, Ljava/lang/String;->startsWith(Ljava/lang/String;I)Z

    move-result v15

    if-eqz v15, :cond_1d

    invoke-static {v14}, Ljava/lang/Short;->parseShort(Ljava/lang/String;)S

    move-result v14

    invoke-virtual {v7, v2, v14}, Landroid/os/Bundle;->putShort(Ljava/lang/String;S)V

    :goto_4
    add-int/lit8 v4, v8, 0x1

    move v2, v13

    goto/16 :goto_1

    :cond_1d
    new-instance v0, Ljava/net/URISyntaxException;

    const-string v2, "unknown EXTRA type"

    invoke-direct {v0, v1, v2, v4}, Ljava/net/URISyntaxException;-><init>(Ljava/lang/String;Ljava/lang/String;I)V

    throw v0

    :cond_1e
    invoke-virtual {v9, v7}, Landroid/content/Intent;->putExtras(Landroid/os/Bundle;)Landroid/content/Intent;

    if-eqz v10, :cond_1f

    invoke-virtual {v3}, Landroid/content/Intent;->getPackage()Ljava/lang/String;

    move-result-object v2

    if-nez v2, :cond_20

    sget v2, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v7, 0xf

    if-lt v2, v7, :cond_20

    invoke-virtual {v3, v9}, Landroid/content/Intent;->setSelector(Landroid/content/Intent;)V

    goto :goto_5

    :cond_1f
    move-object v3, v9

    :cond_20
    :goto_5
    if-eqz v6, :cond_2a

    invoke-virtual {v6, v5}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_21

    const/4 v0, 0x7

    invoke-virtual {v6, v0}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object v6

    if-eqz v11, :cond_29

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/16 v2, 0x3a

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    goto/16 :goto_b

    :cond_21
    invoke-virtual {v6, v0}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_29

    const/16 v0, 0xc

    invoke-virtual {v6, v0}, Ljava/lang/String;->charAt(I)C

    move-result v0

    const/16 v2, 0x2f

    if-ne v0, v2, :cond_28

    const/16 v0, 0xd

    invoke-virtual {v6, v0}, Ljava/lang/String;->charAt(I)C

    move-result v0

    if-ne v0, v2, :cond_28

    const/16 v0, 0xe

    invoke-virtual {v6, v2, v0}, Ljava/lang/String;->indexOf(II)I

    move-result v5
    :try_end_6
    .catch Ljava/lang/IndexOutOfBoundsException; {:try_start_6 .. :try_end_6} :catch_2

    const-string v7, "android.intent.action.MAIN"

    if-gez v5, :cond_22

    :try_start_7
    invoke-virtual {v6, v0}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v3, v0}, Landroid/content/Intent;->setPackage(Ljava/lang/String;)Landroid/content/Intent;

    if-nez v12, :cond_28

    :goto_6
    invoke-virtual {v3, v7}, Landroid/content/Intent;->setAction(Ljava/lang/String;)Landroid/content/Intent;

    goto :goto_a

    :cond_22
    invoke-virtual {v6, v0, v5}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v3, v0}, Landroid/content/Intent;->setPackage(Ljava/lang/String;)Landroid/content/Intent;

    add-int/lit8 v0, v5, 0x1

    invoke-virtual {v6}, Ljava/lang/String;->length()I

    move-result v8

    if-ge v0, v8, :cond_25

    invoke-virtual {v6, v2, v0}, Ljava/lang/String;->indexOf(II)I

    move-result v8

    if-ltz v8, :cond_24

    invoke-virtual {v6, v0, v8}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v11

    invoke-virtual {v6}, Ljava/lang/String;->length()I

    move-result v0

    if-ge v8, v0, :cond_23

    add-int/lit8 v0, v8, 0x1

    invoke-virtual {v6, v2, v0}, Ljava/lang/String;->indexOf(II)I

    move-result v5

    if-ltz v5, :cond_23

    invoke-virtual {v6, v0, v5}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v8

    goto :goto_8

    :cond_23
    move v5, v8

    goto :goto_7

    :cond_24
    invoke-virtual {v6, v0}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object v11

    :cond_25
    :goto_7
    const/4 v8, 0x0

    :goto_8
    if-nez v11, :cond_26

    if-nez v12, :cond_28

    goto :goto_6

    :cond_26
    if-nez v8, :cond_27

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :goto_9
    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    move-object v6, v0

    goto :goto_b

    :cond_27
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "://"

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v5}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    goto :goto_9

    :cond_28
    :goto_a
    move-object v6, v14

    :cond_29
    :goto_b
    invoke-virtual {v6}, Ljava/lang/String;->length()I

    move-result v0
    :try_end_7
    .catch Ljava/lang/IndexOutOfBoundsException; {:try_start_7 .. :try_end_7} :catch_2

    if-lez v0, :cond_2a

    :try_start_8
    invoke-static {v6}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object v0

    invoke-virtual {v3, v0}, Landroid/content/Intent;->setData(Landroid/net/Uri;)Landroid/content/Intent;
    :try_end_8
    .catch Ljava/lang/IllegalArgumentException; {:try_start_8 .. :try_end_8} :catch_1
    .catch Ljava/lang/IndexOutOfBoundsException; {:try_start_8 .. :try_end_8} :catch_2

    goto :goto_c

    :catch_1
    move-exception v0

    :try_start_9
    new-instance v2, Ljava/net/URISyntaxException;

    invoke-virtual {v0}, Ljava/lang/IllegalArgumentException;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-direct {v2, v1, v0}, Ljava/net/URISyntaxException;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    throw v2
    :try_end_9
    .catch Ljava/lang/IndexOutOfBoundsException; {:try_start_9 .. :try_end_9} :catch_2

    :cond_2a
    :goto_c
    return-object v3

    :catch_2
    move v2, v4

    goto :goto_d

    :catch_3
    move v13, v2

    :catch_4
    :goto_d
    new-instance v0, Ljava/net/URISyntaxException;

    const-string v3, "illegal Intent URI format"

    invoke-direct {v0, v1, v3, v2}, Ljava/net/URISyntaxException;-><init>(Ljava/lang/String;Ljava/lang/String;I)V

    throw v0
.end method

.method public static a(Landroid/content/Context;Ljava/lang/Class;)Landroid/util/Pair;
    .locals 5
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/content/Context;",
            "Ljava/lang/Class;",
            ")",
            "Landroid/util/Pair<",
            "Landroid/content/pm/ServiceInfo;",
            "Ljava/lang/Class;",
            ">;"
        }
    .end annotation

    :try_start_0
    invoke-virtual {p0}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v0

    invoke-virtual {p0}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object p0

    const/4 v1, 0x4

    invoke-virtual {v0, p0, v1}, Landroid/content/pm/PackageManager;->getPackageInfo(Ljava/lang/String;I)Landroid/content/pm/PackageInfo;

    move-result-object p0

    iget-object p0, p0, Landroid/content/pm/PackageInfo;->services:[Landroid/content/pm/ServiceInfo;

    if-eqz p0, :cond_2

    array-length v0, p0

    if-lez v0, :cond_2

    array-length v0, p0

    const/4 v1, 0x0

    :goto_0
    if-ge v1, v0, :cond_2

    aget-object v2, p0, v1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    :try_start_1
    iget-object v3, v2, Landroid/content/pm/ServiceInfo;->name:Ljava/lang/String;

    invoke-static {v3}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v3

    if-ne v3, p1, :cond_0

    goto :goto_1

    :cond_0
    const/4 v4, 0x5

    invoke-static {v3, p1, v4}, Lcom/igexin/push/util/i;->a(Ljava/lang/Class;Ljava/lang/Class;I)Z

    move-result v4

    if-eqz v4, :cond_1

    invoke-static {v2, v3}, Landroid/util/Pair;->create(Ljava/lang/Object;Ljava/lang/Object;)Landroid/util/Pair;

    move-result-object p0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    return-object p0

    :catchall_0
    :cond_1
    :goto_1
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :catchall_1
    move-exception p0

    invoke-static {}, Lcom/igexin/b/a/c/a/c;->a()Lcom/igexin/b/a/c/a/c;

    move-result-object p1

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, " findGtImplClassInManifest error = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/Throwable;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {p1, p0}, Lcom/igexin/b/a/c/a/c;->a(Ljava/lang/String;)V

    :cond_2
    const/4 p0, 0x0

    invoke-static {p0, p0}, Landroid/util/Pair;->create(Ljava/lang/Object;Ljava/lang/Object;)Landroid/util/Pair;

    move-result-object p0

    return-object p0
.end method

.method private static a(Landroid/content/Context;)Ljava/lang/String;
    .locals 2

    :try_start_0
    invoke-virtual {p0}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v0

    invoke-virtual {p0}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/content/pm/PackageManager;->getLaunchIntentForPackage(Ljava/lang/String;)Landroid/content/Intent;

    move-result-object v0

    invoke-virtual {p0}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object p0

    const/4 v1, 0x0

    invoke-virtual {p0, v0, v1}, Landroid/content/pm/PackageManager;->queryIntentActivities(Landroid/content/Intent;I)Ljava/util/List;

    move-result-object p0

    if-eqz p0, :cond_0

    invoke-interface {p0}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_0

    invoke-interface {p0, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Landroid/content/pm/ResolveInfo;

    iget-object p0, p0, Landroid/content/pm/ResolveInfo;->activityInfo:Landroid/content/pm/ActivityInfo;

    iget-object p0, p0, Landroid/content/pm/ActivityInfo;->name:Ljava/lang/String;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object p0

    :catchall_0
    :cond_0
    const-string p0, ""

    return-object p0
.end method

.method private static a(Ljava/lang/String;)Ljava/lang/String;
    .locals 6

    :try_start_0
    const-string v0, "android.os.SystemProperties"

    invoke-static {v0}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v0

    const-string v1, "get"

    const/4 v2, 0x1

    new-array v3, v2, [Ljava/lang/Class;

    const-class v4, Ljava/lang/String;

    const/4 v5, 0x0

    aput-object v4, v3, v5

    invoke-virtual {v0, v1, v3}, Ljava/lang/Class;->getDeclaredMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v1

    new-array v2, v2, [Ljava/lang/Object;

    aput-object p0, v2, v5

    invoke-virtual {v1, v0, v2}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Ljava/lang/String;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p0

    invoke-virtual {p0}, Ljava/lang/Throwable;->printStackTrace()V

    const/4 p0, 0x0

    :goto_0
    return-object p0
.end method

.method public static a()Z
    .locals 5

    const/4 v0, 0x0

    :try_start_0
    sget-object v1, Lcom/igexin/push/util/b;->a:Ljava/lang/Boolean;

    if-eqz v1, :cond_0

    sget-object v1, Lcom/igexin/push/util/b;->a:Ljava/lang/Boolean;

    invoke-virtual {v1}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v0

    return v0

    :cond_0
    const-string v1, "ro.miui.ui.version.name"

    invoke-static {v1}, Lcom/igexin/push/util/b;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    const-string v2, "ro.miui.ui.version.code"

    invoke-static {v2}, Lcom/igexin/push/util/b;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-static {}, Lcom/igexin/push/util/j;->a()Ljava/lang/String;

    move-result-object v3

    const-string v4, "Xiaomi"

    invoke-virtual {v4, v3}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v3

    if-nez v3, :cond_2

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_2

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_1

    goto :goto_0

    :cond_1
    move v1, v0

    goto :goto_1

    :cond_2
    :goto_0
    const/4 v1, 0x1

    :goto_1
    invoke-static {v1}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v1

    sput-object v1, Lcom/igexin/push/util/b;->a:Ljava/lang/Boolean;

    sget-object v1, Lcom/igexin/push/util/b;->a:Ljava/lang/Boolean;

    invoke-virtual {v1}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    return v0
.end method

.method public static declared-synchronized a(ILandroid/app/Notification;)Z
    .locals 7

    const-class v0, Lcom/igexin/push/util/b;

    monitor-enter v0

    const/4 v1, 0x0

    :try_start_0
    invoke-static {}, Lcom/igexin/push/util/b;->a()Z

    move-result v2

    if-eqz v2, :cond_0

    invoke-virtual {p1}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v2

    const-string v3, "extraNotification"

    invoke-virtual {v2, v3}, Ljava/lang/Class;->getDeclaredField(Ljava/lang/String;)Ljava/lang/reflect/Field;

    move-result-object v2

    invoke-virtual {v2, p1}, Ljava/lang/reflect/Field;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    invoke-virtual {p1}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v2

    const-string v3, "setMessageCount"

    const/4 v4, 0x1

    new-array v5, v4, [Ljava/lang/Class;

    sget-object v6, Ljava/lang/Integer;->TYPE:Ljava/lang/Class;

    aput-object v6, v5, v1

    invoke-virtual {v2, v3, v5}, Ljava/lang/Class;->getDeclaredMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v2

    new-array v3, v4, [Ljava/lang/Object;

    invoke-static {p0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p0

    aput-object p0, v3, v1

    invoke-virtual {v2, p1, v3}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit v0

    return v4

    :catchall_0
    :cond_0
    monitor-exit v0

    return v1
.end method

.method public static declared-synchronized a(IZ)Z
    .locals 6

    const-class v0, Lcom/igexin/push/util/b;

    monitor-enter v0

    const/4 v1, 0x0

    :try_start_0
    sget-object v2, Lcom/igexin/push/core/d;->g:Landroid/content/Context;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-nez v2, :cond_0

    monitor-exit v0

    return v1

    :cond_0
    :try_start_1
    invoke-static {}, Lcom/igexin/push/util/j;->a()Ljava/lang/String;

    move-result-object v2

    const-string v3, "huawei"

    invoke-virtual {v3, v2}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v3

    if-nez v3, :cond_1

    const-string v3, "honor"

    invoke-virtual {v3, v2}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_3

    :cond_1
    sget-object v2, Lcom/igexin/push/core/d;->g:Landroid/content/Context;

    const-string v3, "hwBadgeNum"

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    new-array v5, v1, [Ljava/lang/String;

    invoke-static {v2, v3, v4, v5}, Lcom/igexin/push/util/k;->c(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;[Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/Integer;

    invoke-virtual {v2}, Ljava/lang/Integer;->intValue()I

    move-result v2

    if-eqz p1, :cond_2

    goto :goto_0

    :cond_2
    add-int/2addr p0, v2

    :goto_0
    sget-object p1, Lcom/igexin/push/core/d;->g:Landroid/content/Context;

    const-string v2, "hwBadgeNum"

    invoke-static {p0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    new-array v4, v1, [Ljava/lang/String;

    invoke-static {p1, v2, v3, v4}, Lcom/igexin/push/util/k;->b(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;[Ljava/lang/String;)V

    new-instance p1, Landroid/os/Bundle;

    invoke-direct {p1}, Landroid/os/Bundle;-><init>()V

    const-string v2, "package"

    sget-object v3, Lcom/igexin/push/core/d;->e:Ljava/lang/String;

    invoke-virtual {p1, v2, v3}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    const-string v2, "class"

    sget-object v3, Lcom/igexin/push/core/d;->g:Landroid/content/Context;

    invoke-static {v3}, Lcom/igexin/push/util/b;->a(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {p1, v2, v3}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    const-string v2, "badgenumber"

    invoke-virtual {p1, v2, p0}, Landroid/os/Bundle;->putInt(Ljava/lang/String;I)V

    sget-object p0, Lcom/igexin/push/core/d;->g:Landroid/content/Context;

    invoke-virtual {p0}, Landroid/content/Context;->getContentResolver()Landroid/content/ContentResolver;

    move-result-object p0

    const-string v2, "content://com.huawei.android.launcher.settings/badge/"

    invoke-static {v2}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object v2

    const-string v3, "change_badge"

    const/4 v4, 0x0

    invoke-virtual {p0, v2, v3, v4, p1}, Landroid/content/ContentResolver;->call(Landroid/net/Uri;Ljava/lang/String;Ljava/lang/String;Landroid/os/Bundle;)Landroid/os/Bundle;
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    const/4 p0, 0x1

    monitor-exit v0

    return p0

    :catchall_0
    :cond_3
    monitor-exit v0

    return v1
.end method

.method private static b(Ljava/lang/String;I)Landroid/content/Intent;
    .locals 17

    move-object/from16 v0, p0

    const/16 v1, 0x23

    invoke-virtual {v0, v1}, Ljava/lang/String;->lastIndexOf(I)I

    move-result v1

    const-string v2, "android.intent.action.VIEW"

    if-ltz v1, :cond_1e

    const/4 v3, 0x0

    add-int/lit8 v4, v1, 0x1

    const/4 v5, 0x7

    const/4 v6, 0x0

    const-string v7, "action("

    invoke-virtual {v0, v4, v7, v6, v5}, Ljava/lang/String;->regionMatches(ILjava/lang/String;II)Z

    move-result v7

    const/16 v8, 0x29

    const/4 v9, 0x1

    if-eqz v7, :cond_0

    add-int/lit8 v4, v4, 0x7

    invoke-virtual {v0, v8, v4}, Ljava/lang/String;->indexOf(II)I

    move-result v3

    invoke-virtual {v0, v4, v3}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v4

    add-int/2addr v3, v9

    move v7, v9

    move-object/from16 v16, v4

    move v4, v3

    move-object/from16 v3, v16

    goto :goto_0

    :cond_0
    move v7, v6

    :goto_0
    new-instance v10, Landroid/content/Intent;

    invoke-direct {v10, v3}, Landroid/content/Intent;-><init>(Ljava/lang/String;)V

    const/16 v3, 0xb

    const-string v11, "categories("

    invoke-virtual {v0, v4, v11, v6, v3}, Ljava/lang/String;->regionMatches(ILjava/lang/String;II)Z

    move-result v3

    const/16 v11, 0x21

    if-eqz v3, :cond_5

    add-int/lit8 v4, v4, 0xb

    invoke-virtual {v0, v8, v4}, Ljava/lang/String;->indexOf(II)I

    move-result v3

    :goto_1
    if-ge v4, v3, :cond_4

    invoke-virtual {v0, v11, v4}, Ljava/lang/String;->indexOf(II)I

    move-result v7

    if-ltz v7, :cond_1

    if-le v7, v3, :cond_2

    :cond_1
    move v7, v3

    :cond_2
    if-ge v4, v7, :cond_3

    invoke-virtual {v0, v4, v7}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v10, v4}, Landroid/content/Intent;->addCategory(Ljava/lang/String;)Landroid/content/Intent;

    :cond_3
    add-int/lit8 v4, v7, 0x1

    goto :goto_1

    :cond_4
    add-int/lit8 v4, v3, 0x1

    move v7, v9

    :cond_5
    const/4 v3, 0x5

    const-string v12, "type("

    invoke-virtual {v0, v4, v12, v6, v3}, Ljava/lang/String;->regionMatches(ILjava/lang/String;II)Z

    move-result v3

    if-eqz v3, :cond_6

    add-int/lit8 v4, v4, 0x5

    invoke-virtual {v0, v8, v4}, Ljava/lang/String;->indexOf(II)I

    move-result v3

    invoke-virtual {v0, v4, v3}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v10, v4}, Landroid/content/Intent;->setType(Ljava/lang/String;)Landroid/content/Intent;

    add-int/lit8 v4, v3, 0x1

    move v7, v9

    :cond_6
    const/16 v3, 0xc

    const-string v12, "launchFlags("

    invoke-virtual {v0, v4, v12, v6, v3}, Ljava/lang/String;->regionMatches(ILjava/lang/String;II)Z

    move-result v3

    if-eqz v3, :cond_a

    add-int/lit8 v4, v4, 0xc

    invoke-virtual {v0, v8, v4}, Ljava/lang/String;->indexOf(II)I

    move-result v3

    invoke-virtual {v0, v4, v3}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v4

    invoke-static {v4}, Ljava/lang/Integer;->decode(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v4

    invoke-virtual {v4}, Ljava/lang/Integer;->intValue()I

    move-result v4

    invoke-virtual {v10, v4}, Landroid/content/Intent;->setFlags(I)Landroid/content/Intent;

    and-int/lit8 v4, p1, 0x4

    if-nez v4, :cond_9

    const/4 v4, 0x3

    sget v7, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v12, 0x13

    if-lt v7, v12, :cond_7

    const/16 v4, 0x43

    :cond_7
    sget v7, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v12, 0x15

    if-lt v7, v12, :cond_8

    or-int/lit16 v4, v4, 0x80

    :cond_8
    invoke-virtual {v10}, Landroid/content/Intent;->getFlags()I

    move-result v7

    not-int v4, v4

    and-int/2addr v4, v7

    invoke-virtual {v10, v4}, Landroid/content/Intent;->setFlags(I)Landroid/content/Intent;

    :cond_9
    add-int/lit8 v4, v3, 0x1

    move v7, v9

    :cond_a
    const/16 v3, 0xa

    const-string v12, "component("

    invoke-virtual {v0, v4, v12, v6, v3}, Ljava/lang/String;->regionMatches(ILjava/lang/String;II)Z

    move-result v3

    if-eqz v3, :cond_c

    add-int/lit8 v4, v4, 0xa

    invoke-virtual {v0, v8, v4}, Ljava/lang/String;->indexOf(II)I

    move-result v3

    invoke-virtual {v0, v11, v4}, Ljava/lang/String;->indexOf(II)I

    move-result v7

    if-ltz v7, :cond_b

    if-ge v7, v3, :cond_b

    invoke-virtual {v0, v4, v7}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v4

    add-int/2addr v7, v9

    invoke-virtual {v0, v7, v3}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v7

    new-instance v12, Landroid/content/ComponentName;

    invoke-direct {v12, v4, v7}, Landroid/content/ComponentName;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {v10, v12}, Landroid/content/Intent;->setComponent(Landroid/content/ComponentName;)Landroid/content/Intent;

    :cond_b
    add-int/lit8 v4, v3, 0x1

    move v7, v9

    :cond_c
    const-string v3, "extras("

    invoke-virtual {v0, v4, v3, v6, v5}, Ljava/lang/String;->regionMatches(ILjava/lang/String;II)Z

    move-result v3

    if-eqz v3, :cond_1c

    add-int/2addr v4, v5

    invoke-virtual {v0, v8, v4}, Ljava/lang/String;->indexOf(II)I

    move-result v3

    const/4 v5, -0x1

    if-eq v3, v5, :cond_1b

    invoke-virtual {v10}, Landroid/content/Intent;->getExtras()Landroid/os/Bundle;

    move-result-object v7

    if-nez v7, :cond_d

    new-instance v7, Landroid/os/Bundle;

    invoke-direct {v7}, Landroid/os/Bundle;-><init>()V

    invoke-virtual {v10, v7}, Landroid/content/Intent;->putExtras(Landroid/os/Bundle;)Landroid/content/Intent;

    :cond_d
    invoke-virtual {v10}, Landroid/content/Intent;->getExtras()Landroid/os/Bundle;

    move-result-object v7

    :goto_2
    if-ge v4, v3, :cond_1a

    const/16 v12, 0x3d

    invoke-virtual {v0, v12, v4}, Ljava/lang/String;->indexOf(II)I

    move-result v12

    add-int/lit8 v13, v4, 0x1

    if-le v12, v13, :cond_19

    if-ge v4, v3, :cond_19

    invoke-virtual {v0, v4}, Ljava/lang/String;->charAt(I)C

    move-result v4

    invoke-virtual {v0, v13, v12}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v13

    add-int/lit8 v12, v12, 0x1

    invoke-virtual {v0, v11, v12}, Ljava/lang/String;->indexOf(II)I

    move-result v14

    if-eq v14, v5, :cond_e

    if-lt v14, v3, :cond_f

    :cond_e
    move v14, v3

    :cond_f
    const-string v15, "EXTRA missing \'!\'"

    if-ge v12, v14, :cond_18

    invoke-virtual {v0, v12, v14}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v12

    const/16 v5, 0x42

    if-eq v4, v5, :cond_15

    const/16 v5, 0x53

    if-eq v4, v5, :cond_14

    const/16 v5, 0x66

    if-eq v4, v5, :cond_13

    const/16 v5, 0x69

    if-eq v4, v5, :cond_12

    const/16 v5, 0x6c

    if-eq v4, v5, :cond_11

    const/16 v5, 0x73

    if-eq v4, v5, :cond_10

    packed-switch v4, :pswitch_data_0

    :try_start_0
    new-instance v1, Ljava/net/URISyntaxException;

    const-string v2, "EXTRA has unknown type"

    invoke-direct {v1, v0, v2, v14}, Ljava/net/URISyntaxException;-><init>(Ljava/lang/String;Ljava/lang/String;I)V

    throw v1

    :pswitch_0
    invoke-static {v12}, Ljava/lang/Double;->parseDouble(Ljava/lang/String;)D

    move-result-wide v4

    invoke-virtual {v7, v13, v4, v5}, Landroid/os/Bundle;->putDouble(Ljava/lang/String;D)V

    goto :goto_3

    :pswitch_1
    invoke-static {v12}, Landroid/net/Uri;->decode(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v4, v6}, Ljava/lang/String;->charAt(I)C

    move-result v4

    invoke-virtual {v7, v13, v4}, Landroid/os/Bundle;->putChar(Ljava/lang/String;C)V

    goto :goto_3

    :pswitch_2
    invoke-static {v12}, Ljava/lang/Byte;->parseByte(Ljava/lang/String;)B

    move-result v4

    invoke-virtual {v7, v13, v4}, Landroid/os/Bundle;->putByte(Ljava/lang/String;B)V

    goto :goto_3

    :cond_10
    invoke-static {v12}, Ljava/lang/Short;->parseShort(Ljava/lang/String;)S

    move-result v4

    invoke-virtual {v7, v13, v4}, Landroid/os/Bundle;->putShort(Ljava/lang/String;S)V

    goto :goto_3

    :cond_11
    invoke-static {v12}, Ljava/lang/Long;->parseLong(Ljava/lang/String;)J

    move-result-wide v4

    invoke-virtual {v7, v13, v4, v5}, Landroid/os/Bundle;->putLong(Ljava/lang/String;J)V

    goto :goto_3

    :cond_12
    invoke-static {v12}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v4

    invoke-virtual {v7, v13, v4}, Landroid/os/Bundle;->putInt(Ljava/lang/String;I)V

    goto :goto_3

    :cond_13
    invoke-static {v12}, Ljava/lang/Float;->parseFloat(Ljava/lang/String;)F

    move-result v4

    invoke-virtual {v7, v13, v4}, Landroid/os/Bundle;->putFloat(Ljava/lang/String;F)V

    goto :goto_3

    :cond_14
    invoke-static {v12}, Landroid/net/Uri;->decode(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v7, v13, v4}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_3

    :cond_15
    invoke-static {v12}, Ljava/lang/Boolean;->parseBoolean(Ljava/lang/String;)Z

    move-result v4

    invoke-virtual {v7, v13, v4}, Landroid/os/Bundle;->putBoolean(Ljava/lang/String;Z)V
    :try_end_0
    .catch Ljava/lang/NumberFormatException; {:try_start_0 .. :try_end_0} :catch_0

    :goto_3
    invoke-virtual {v0, v14}, Ljava/lang/String;->charAt(I)C

    move-result v4

    if-ne v4, v8, :cond_16

    goto :goto_4

    :cond_16
    if-ne v4, v11, :cond_17

    add-int/lit8 v4, v14, 0x1

    const/4 v5, -0x1

    goto/16 :goto_2

    :cond_17
    new-instance v1, Ljava/net/URISyntaxException;

    invoke-direct {v1, v0, v15, v14}, Ljava/net/URISyntaxException;-><init>(Ljava/lang/String;Ljava/lang/String;I)V

    throw v1

    :catch_0
    new-instance v1, Ljava/net/URISyntaxException;

    const-string v2, "EXTRA value can\'t be parsed"

    invoke-direct {v1, v0, v2, v14}, Ljava/net/URISyntaxException;-><init>(Ljava/lang/String;Ljava/lang/String;I)V

    throw v1

    :cond_18
    new-instance v1, Ljava/net/URISyntaxException;

    invoke-direct {v1, v0, v15, v12}, Ljava/net/URISyntaxException;-><init>(Ljava/lang/String;Ljava/lang/String;I)V

    throw v1

    :cond_19
    new-instance v1, Ljava/net/URISyntaxException;

    const-string v2, "EXTRA missing \'=\'"

    invoke-direct {v1, v0, v2, v4}, Ljava/net/URISyntaxException;-><init>(Ljava/lang/String;Ljava/lang/String;I)V

    throw v1

    :cond_1a
    :goto_4
    invoke-virtual {v10, v7}, Landroid/content/Intent;->putExtras(Landroid/os/Bundle;)Landroid/content/Intent;

    goto :goto_5

    :cond_1b
    new-instance v1, Ljava/net/URISyntaxException;

    const-string v2, "EXTRA missing trailing \')\'"

    invoke-direct {v1, v0, v2, v4}, Ljava/net/URISyntaxException;-><init>(Ljava/lang/String;Ljava/lang/String;I)V

    throw v1

    :cond_1c
    move v9, v7

    :goto_5
    if-eqz v9, :cond_1d

    invoke-virtual {v0, v6, v1}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object v0

    goto :goto_6

    :cond_1d
    invoke-static/range {p0 .. p0}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object v0

    :goto_6
    invoke-virtual {v10, v0}, Landroid/content/Intent;->setData(Landroid/net/Uri;)Landroid/content/Intent;

    invoke-virtual {v10}, Landroid/content/Intent;->getAction()Ljava/lang/String;

    move-result-object v0

    if-nez v0, :cond_1f

    invoke-virtual {v10, v2}, Landroid/content/Intent;->setAction(Ljava/lang/String;)Landroid/content/Intent;

    goto :goto_7

    :cond_1e
    new-instance v10, Landroid/content/Intent;

    invoke-static/range {p0 .. p0}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object v0

    invoke-direct {v10, v2, v0}, Landroid/content/Intent;-><init>(Ljava/lang/String;Landroid/net/Uri;)V

    :cond_1f
    :goto_7
    return-object v10

    nop

    :pswitch_data_0
    .packed-switch 0x62
        :pswitch_2
        :pswitch_1
        :pswitch_0
    .end packed-switch
.end method
