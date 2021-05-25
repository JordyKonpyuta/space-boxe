#include <iostream>

int main() {

  // Déclaration des variables
  
  int choix1 = 0;
  int choix2a = 0;
  int choix3a = 0;
  int choix4a = 0;
  int choix2b = 0;
  int choix3b = 0;
  int choix4b = 0;

  // Introduction
  
  std::cout << "Vous êtes un lycéen japonais du nom de Kazuo Chiheisen. Vous avez une petite soeur, Mayu. Tous les deux, vous n'êtes pas doués en cours, vous êtes antisocials, et vos parents vous ont lâchés à cause de ça.\n";
  std::cout << "Un jour, alors que vous étiez sur le point de rentrer chez vous, vous apercevez une porte qui n'était pas là avant. Quelque chose de bizarre s'en dégage.\n\n";

  // Choix 1
  
  for (int i = 0; i < 3 && choix1 != 1 && choix1 != 2 && choix1 != 3; i++ ) {
  std::cout << "Que faites-vous?\n";
  std::cout << "1) Vous l'ouvrez pour savoir ce qu'il y a derrière\n";
  std::cout << "2) Vous allez chercher Mayu pour l'ouvrir tous les deux\n";
  std::cout << "3) Vous l'ignorez et rentrez chez vous\n";

  std::cin >> choix1;
  }

  // Embranchement A
  
  if (choix1 == 1) {
    std::cout << "Intrigué, vous approchez doucement de la porte, saisissez la poignée et l'ouvrez, pour tomber nez à nez avec un précipice qui semble sans fond. Vous essayez de vous accrocher à la poignée pour ne pas tomber, mais celle-ci cède sous votre poids, vous emportant avec elle dans les abysses. Après une chute qui semblait durer une éternité, vous atterrissez sur les fesses. Après vous être remis de la douleur, vous regardez autours de vous. Vous êtes dans ce qui ressemble à une plaine, traversée par un chemin de pierre. Les pierres sont un peu bizarres, mais à part ça tout à l'air normal...\n";
    std::cout << "Tout d'un coup, un petit robot bleu apparaît devant vous. Après un bref coup d'oeil, il saute de joie, vous prend sous son bras et vous emmène avec lui, avant que vous ayez le temps de comprendre quoi que ce soit. Vous regardez au-dessus de l'épaule du robot, et vous vous rendez compte qu'il vous emmène dans une ville futuriste, remplie de buildings de verre. Pas de doute, vous êtes dans une dimension parrallèle. Le robot se précipita vers la tour au centre de la ville et y entra. Il se rend dans une salle remplie d'autres robots de toutes les couleurs, et vous balance devant eux.\n\n";
    std::cout << "Nous sommes sauvés! J'ai trouvé quelqu'un qui va nous aider! - s'écria le robot bleu.\n\n";
    std::cout << "Vous ne comprenez rien à ce qui se passe. Les autres robots vous fixent sans rien dire, comme s'ils attendaient quelque chose. Le robot bleu se tourne vers vous.\n\n";

    // Choix 2

    for (int i = 0; i < 3 && choix2a != 1 && choix2a != 2; i++) {
    std::cout << "Vous allez nous aider, n'est-ce pas?\n";
    std::cout << "1) Oui\n";
    std::cout << "2) Non\n";

    std::cin >> choix2a;
    }

    // Choix 2 : réponse 1
    
    if (choix2a == 1) {
      std::cout << "Vous hochez la tête. Tous les robots devant vous écarquillent les yeux au maximum, pendant que le robot bleu saute de joie. Vous n'avez même pas le temps de rire de leur réaction que le robot bleu vous saisit et vous emmène tout en haut de la tour. Une fois en haut, il vous balance sur le sol. En levant les yeux, vous vous rendez compte que vous êtes maintenant dans une sorte d'armurerie, et que plusieurs combinaisons bleues futuristes sont accrochées sur le mur devant vous, avec leurs armes assorties.\n\n";
      std::cout << "Allez-y, faites votre choix! - dis le robot bleu en pointant les équipements devant vous.\n\n";

      // Choix 3

      for (int i = 0; i < 3 && choix3a != 1 && choix3a != 2 && choix3a != 3; i++) {
      std::cout << "Je choisis...\n";
      std::cout << "1) La combinaison blindée et son bazooka\n";
      std::cout << "2) La combinaison légère avec son épée effilée\n";
      std::cout << "3) La robe et son bâton de berger du futur\n";

      std::cin >> choix3a;
      }

      // Choix 3 : réponse 1
      
      if (choix3a == 1) {
        std::cout << "Sans hésiter, vous vous saisissez du gros pistolet. Piou! Piou!\n\n";
        std::cout << "Le robot bleu vous tire par le bras pour vous emmener vers une fenêtre. Il vous pointe du doigt la colline loin derrière la ville. En regardant plus attentivement, vous vous rendez compte qu'une armée de machines toutes noires se dirigent vers vous!\n\n";
        std::cout << "Allez repousser l'envahisseur! - s'écria le robot bleu.\n\n";
        std::cout << "Déterminé à en découdre, vous enfilez l'armure, et vous rendez sur le champ de bataille, bazooka en main et torse bombé.\n";
        std::cout << "Une fois arrivé sur place, vous brandissez fièrement votre bazooka vers l'armée, qui s'arrête devant vous. Tous les robots se mettent à rire (de vous), jusqu'à ce que l'un d'entre eux, le plus gros (probablement leur chef), prenne la parole.\n\n";
        std::cout << "Tu pense réellement que tu as une chance contre nous, misérable moustique? - se moque-t-il.\n\n";
        std::cout << "Bien décidé à lui faire ravaler ses paroles, vous soufflez un bon coup. Vous chargez votre bazooka et tirez un laser vers un robot, en visant une plaque rouge brillante située au centre de son poitrail, ce qui le fait aussitôt exploser. Vous souriez en coin.. Vous  rechargez votre bazooka et faites de même pour tous les robots devant vous, jusqu'à ce qu'il n'en reste qu'un, leur chef. Vous baissez votre bazooka et avançez lentement vers lui. A mesure que vous vous approchez de lui, il recule, jusqu'à tomber comme un teubé sur les fesses. Alors que vous le surplombez, il tend sa main vers vous, comme pour vous dire de ne pas approcher davantage, le regard plein de terreur.\n\n";

        // Choix 4

        for (int i = 0; i < 3 && choix4a != 1 && choix4a != 2; i++) {
        std::cout << "Pitié! J'ai une famille! - supplie-t-il.\n\n";
        std::cout << "1) L'épargner\n";
        std::cout << "2) Le tuer\n";

        std::cin >> choix4a;
        }

        // Choix 4 : réponse 1
        
        if (choix4a == 1) {
          std::cout << "Ne voulant pas gaspiller des balles sur un ennemi à terre, vous décidez de l'épargner. Alors que vous emboîtez le pas pour retourner dans la ville et annoncer votre victoire, vous sentez quelque chose vous transpercer le torse. En baissant les yeux, vous vous rendez compte que c'est une lame toute noire, de la même couleur que le robot.\n\n";
          std::cout << "Et merde...\n\n";
          std::cout << "Le robot retire d'un coup sec son épée, et vous tombez au sol, raide. Le robot rit un grand coup, avant de s'avancer tout guilleret vers la ville. Vous avez le temps d'entendre des cris et des bruits de destruction, avant de rendre votre dernier souffle.\n\n";

          std::cout << "FIN 4: Ne jamais épargner ses ennemis...\n";
          return 0;

          // Choix 4 : réponse 2
          
        } else if (choix4a == 2) {
          std::cout << "Vous le fixez un moment, sans bouger. Pensant que vous avez changé d'avis, le robot commence à se lever doucement, en reprenant confiance petit à petit. Soudain, vous plaquez votre arme contre son poitrail et lui tirez un laser en plein 'coeur'. A peine a-t-il compris son erreur que le robot explose en plusieurs milliers de confettis. Après avoir un peu profité de la pluie de confettis, vous attachez votre bazooka dans votre dos et retournez fiérement dans la ville. Là-bas, vous êtes accueilli comme un héro. Les robots vous soulèvent comme un entraîneur d'équipe de foot qui vient de gagner un match, et vous balade comme ça dans toute la ville, en vous arrosant de serpentins et de ce qui ressemble à du champagne.\n\n";
          std::cout << "Les robots vous conduisent dans une salle de la tour principale, où se trouve quelque chose qui ressemble à un téléporteur. Ils vous posent et se réunissent tous devant vous.\n\n";
          std::cout << "Merci infiniment de nous avoir sauvés! - dit le robot bleu du début. Vous serez à jamais vénéré comme un héro, qui a su repousser l'envahisseur à lui seul! Nous allons vous ramener chez vous, mais sachez que nous ne vous oublierons jamais! Vous pouvez repartir avec l'équipement que nous vous avons donné, en guise de souvenir de votre venue. Adieu, héro! Et rentrez bien!\n\n";
          std::cout << "Vous leur faites un salut de la main, et entrez dans le téléporteur. Pendant que vous sentez partir, tous les robots vous font des coucous en bondissant. Après quelques secondes, vous êtes téléporté à l'endroit exact où vous étiez avant d'atterrir dans cette dimension. Le temps ne semble pas avoir bougé ici. Alors que vous vous dirigez vers chez vous, vous vous rendez compte que vous portez toujours la tenue futuriste. Bha, vous n'aurez qu'à dire à votre soeur que vous avez eu une soudaine envie de vous acheter un cosplay...\n";
          std::cout << "Vous reprenez votre chemin vers chez vous, tout fier de savoir qu'il existe une dimension parrallèle dans laquelle vous êtes un héro de guerre national. Et puis, vous avez un bazooka maintenant!\n\n";
          
          std::cout << "FIN 5.5: Piou piou!\n";
          return 0;
        }
        
        // Choix 3, réponse 2
        
      } else if (choix3a == 2) {
        std::cout << "Vous prenez l'épée. Vos heures de jeu sur Beat Saber vont enfin vous servir à quelque chose.\n\n";
        std::cout << "Le robot bleu vous tire par le bras pour vous emmener vers une fenêtre. Il vous pointe du doigt la colline loin derrière la ville. En regardant plus attentivement, vous vous rendez compte qu'une armée de machines toutes noires se dirigent vers vous!\n\n";
        std::cout << "Allez repousser l'envahisseur! - s'écria le robot bleu.\n\n";
        std::cout << "Déterminé à en découdre, vous enfilez la combinaison, et vous rendez sur le champ de bataille, épée en main et torse bombé.\n\n";
        std::cout << "Une fois arrivé sur place, vous brandissez fièrement votre épée vers l'armée, qui s'arrête devant vous. Tous les robots se mettent à rire (de vous), jusqu'à ce que l'un d'entre eux, le plus gros (probablement leur chef), prenne la parole.\n\n";
        std::cout << "Tu pense réellement que tu as une chance contre nous, misérable moustique? - se moque-t-il.\n\n";
        std::cout << "Bien décidé à lui faire ravaler ses paroles, vous soufflez un bon coup, et vous élançez vers l'armée. Vous vous dirigez vers un des robots et lui portez un coup sur une plaque rouge brillante située au centre de son poitrail, ce qui le fait aussitôt exploser. C'est quand même vachement pratique, les points faibles visibles. Vous virevoltez entre les robots de façon très stylée et faites de même pour tous, jusqu'à ce qu'il n'en reste qu'un, leur chef. Vous rangez votre épée et avançez lentement vers lui. A mesure que vous vous approchez de lui, il recule, jusqu'à tomber comme un teubé sur les fesses. Alors que vous le surplombez, il tend sa main vers vous, comme pour vous dire de ne pas approcher davantage, le regard plein de terreur.\n\n";

        // Choix 4

        for (int i = 0; i < 3 && choix4a != 1 && choix4a != 2; i++) {
        std::cout << "Pitié! J'ai une famille! - supplie-t-il.\n\n";
        std::cout << "1) L'épargner\n";
        std::cout << "2) Le tuer\n";

        std::cin >> choix4a;
        }

        // Choix 4 : réponse 1
        
        if (choix4a == 1) {
          std::cout << "Votre code de l'honneur vous dictant de ne pas frapper un ennemi à terre - et parce qu'il fait quand même sacrément pitié - vous décidez de l'épargner. Alors que vous emboîtez le pas pour retourner dans la ville et annoncer votre victoire, vous sentez quelque chose vous transpercer le torse. En baissant les yeux, vous vous rendez compte que c'est une lame toute noire, de la même couleur que le robot.\n\n";
          std::cout << "Et merde...\n\n";
          std::cout << "Le robot retire d'un coup sec son épée, et vous tombez au sol, raide. Le robot rit un grand coup, avant de s'avancer tout guilleret vers la ville. Vous avez le temps d'entendre des cris et des bruits de destruction, avant de rendre votre dernier souffle.\n\n";

          std::cout << "FIN 4: Ne jamais épargner ses ennemis...\n";
          return 0;

          // Choix 4 : réponse 2
          
        } else if (choix4a == 2) {
          std::cout << "Vous le fixez un moment, sans bouger. Pensant que vous avez changé d'avis, le robot commence à se lever doucement, en reprenant confiance petit à petit. Soudain, vous lui portez un coup en plein 'coeur'. A peine a-t-il compris son erreur que le robot explose en plusieurs milliers de confettis. Après avoir un peu profité de la pluie de confettis, vous rangez votre épée et retournez fiérement dans la ville. Là-bas, vous êtes accueilli comme un héro. Les robots vous soulèvent comme un entraîneur d'équipe de foot qui vient de gagner un match, et vous balade comme ça dans toute la ville, en vous arrosant de serpentins et de ce qui ressemble à du champagne.\n\n";
          std::cout << "Les robots vous conduisent dans une salle de la tour principale, où se trouve quelque chose qui ressemble à un téléporteur. Ils vous posent et se réunissent tous devant vous.\n\n";
          std::cout << "Merci infiniment de nous avoir sauvés! - dit le robot bleu du début. Vous serez à jamais vénéré comme un héro, qui a su repousser l'envahisseur à lui seul! Nous allons vous ramener chez vous, mais sachez que nous ne vous oublierons jamais! Vous pouvez repartir avec l'équipement que nous vous avons donné, en guise de souvenir de votre venue. Adieu, héro! Et rentrez bien!\n\n";
          std::cout << "Vous leur faites un salut de la main, et entrez dans le téléporteur. Pendant que vous sentez partir, tous les robots vous font des coucous en bondissant. Après quelques secondes, vous êtes téléporté à l'endroit exact où vous étiez avant d'atterrir dans cette dimension. Le temps ne semble pas avoir bougé ici. Alors que vous vous dirigez vers chez vous, vous vous rendez compte que vous portez toujours la tenue futuriste. Bha, vous n'aurez qu'à dire à votre soeur que vous avez eu une soudaine envie de vous acheter un cosplay...\n";
          std::cout << "Vous reprenez votre chemin vers chez vous, tout fier de savoir qu'il existe une dimension parrallèle dans laquelle vous êtes un héro de guerre national.\n\n";
          
          std::cout << "FIN 5: C'était marrant!\n";
          return 0;
        }

        // Choix 3 : réponse 3
        
      }  else if (choix3a == 3) {
        std::cout << "Vous décrochez le bâton du mur. ça peut être marrant de jeter des sorts.\n\n";
        std::cout << "Le robot bleu vous tire par le bras pour vous emmener vers une fenêtre. Il vous pointe du doigt la colline loin derrière la ville. En regardant plus attentivement, vous vous rendez compte qu'une armée de machines toutes noires se dirigent vers vous!\n\n";
        std::cout << "Allez repousser l'envahisseur! - s'écria le robot bleu.\n\n";
        std::cout << "Déterminé à en découdre, vous enfilez la robe de mage du futur, et vous rendez sur le champ de bataille, bâton en main et torse bombé.\n";
        std::cout << "Une fois arrivé devant l'armée des envahisseurs, vous levez votre bâton vers le ciel avec fierté, et... vous vous rendez compte que vous ne connaissez aucun sort... L'armée passe à côté de vous, tandis que vous restez là, sans bouger, le bâton toujours levé. Après quelques secondes, vous tounez la tête, et vous rendez compte que l'armée a déjà détruit la ville...Oupsy...\n\n";

        std::cout << "FIN 3: J'aurais dû suivre les cours de magie...\n";
        return 0;

      } else {
        std::cout << "L'histoire n'avançera pas si vous ne vous décidez pas. Faites votre choix.\n";
      }
      
      // Choix 2 : réponse 2
      
    } else if (choix2a == 2) {
      std::cout << "Après avoir jeté un regard sur tous les robots, vous leur lançez un froid et direct 'Non'. Ils soupirent tous. L'un d'eux se tourna vers le robot bleu.\n\n";
      std::cout << "Tu fais chier, hein! A chaque fois c'est pareil! Tu nous ramène un gars en disant 'Il va nous sauver! Il va nous sauver!' et au final ils disent non! Tu devrais le savoir à la longue que les humains veulent pas nous aider! Allez, ramène-le chez lui, avant qu'il soit traumatisé.\n\n";
      std::cout << "Le robot bleu baisse la tête, déçu. Il vous prend sur son épaule, vous emmène dans une petite salle à l'arrière où se trouve une machine qui ressemble à un téléporteur.Il vous place dedans et appuie sur un bouton, la tête toujours baissée. Après un bref instant, vous vous retrouvez exactement où vous étiez avant de tomber dans la porte. Après vous être gratté derrière la tête, vous vous empressez de rentrer chez vous. C'est bientôt l'heure des pubs.\n\n";
      std::cout << "FIN 2: J'suis trop vieux pour ces conneries.\n";
    } else {
      std::cout << "L'histoire n'avançera pas si vous ne vous décidez pas. Faites votre choix.\n";
    }
  
  } 
  
  // Embranchement B
  
  else if (choix1 == 2) {
      std::cout << "Vous rentrez précipitamment chez vous pour aller chercher votre soeur. Après 30 minutes à essayer de la convaincre de revenir au lycée après les cours, elle accepte finalement. Armés de vos lampes torches, vous rentrez discrètement dans le lycée. Vous apercevez la porte au loin.\n\n";
      std::cout << "Tiens regarde, c'est celle-là.\n\n";
      std::cout << "Il lui suffit d'un seul coup d'oeil pour comprendre pourquoi vous avez voulu la ramener ici.\n\n";
      std::cout << "C'est vrai que c'est chelou... - dit-elle.\n\n";
      std::cout << "Elle s'approcha tout doucement de la porte et l'ouvre, avant de se stopper net. Vous accourrez pour voir ce qui se passe, et vous rendez compte que la porte donne sur le vide. Vous n'avez pas le temps de reprendre l'équilibre que vous tombez, entraînant Mayu dans votre chute. Après avoir chuté pendant une éternité, vous atterrissez enfin. En reprenant vos esprits, et après avoir subi un regard mauvais de Mayu, vous regardez tous les deux autours de vous. Vous êtes maintenant dans une vaste plaine, traversée par un chemin de pierre. Mayu les contempla quelques secondes.\n\n";
      std::cout << "J'arrive pas à savoir c'est quoi comme genre de pierre... - réfléchit-elle. Elle fait des études en biologie.\n\n";
      std::cout << "Mis à part les pierres bizarres, tout à l'air normal ici... Jusqu'à ce qu'un petit robot bleu se pointe devant vous. Mayu et vous le regardez d'un air ébahi, tandis que le robot bondit en s'écriant 'Hourra!'. Ni une ni deux, il vous prend tous les deux sous ses bras et vous embarque avec lui. En regardant par-dessus son épaule, vous vous rendez compte qu'il vous emmène dans une ville futuriste entièrement constituée de buildings en verres.\n\n";
      std::cout << "Ok, on est définitivement dans une dimension parrallèle...\n\n";
      std::cout << "Sans blague... - répond Mayu.\n\n";
      std::cout << "Le robot bleu se précipite dans la plus grande tour au centre de la ville, se rend dans une salle remplie de robots de toutes les couleurs et vous balance tous les deux au sol devant eux.\n\n";
      std::cout << "Regardez ce que j'ai trouvé!! Regardez ce que j'ai trouvé!!! - s'écria le robot.\n\n";
      std::cout << "Les autres robots se penchent vers vous, avec un sourire bizarre. Vous vous rendez compte que c'est votre soeur qu'ils regardent avec cet air chelou.\n\n";
      std::cout << "Je crois qu'ils veulent ton cul...\n\n";
      std::cout << "Je crois aussi...Aled... - chuchote Mayu.\n\n";

      // Choix 2

      for (int i = 0; i < 3 && choix2b != 1 && choix2b != 2; i++) {
      std::cout << "Nous avons besoin de l'aide d'humains, et vous ferez parfaitement l'affaire tous les deux! - reprend le robot bleu - Vous voulez bien nous aider?\n\n";

      std::cout << "1) Euh...oui?\n";
      std::cout << "2) Même pas en rêve!\n";

      std::cin >> choix2b;
      }
    
      // Choix 2 : réponse 1
    
      if (choix2b == 1) {
        std::cout << "Tous les robots sautent de joie. Ils vous soulèvent tous les deux comme des stars du foot qui viennent de marquer un but, et vous emmènenent dans une sorte d'armurerie. Sur le mur, il y a deux combinaisons futuristes bleues, une pour garçon et une pour fille - comme par hasard - accompagnées toutes les deux d'une épée.\n\n";
        std::cout << "Voici votre équipement! - dit le robot bleu - Je vous en prie, enfilez-le!\n\n";
        std::cout << "Les robots restent là, trépignants d'impatience. Mayu prend l'épée et la pointe vers eux, le regard mauvais. Tous les robots sortent de la pièce, et Mayu ferme la porte à clé derrière eux. Vous pouffez en silence et commencez à enfiler votre tenue, pendant que Mayu regarde la sienne en grimaçant.\n\n";
        std::cout << "Je refuse de porter ça...\n\n";
        std::cout << "Vous jetez un coup d'oeil à sa tenue, pour voir qu'il s'agit d'un body bleu futuriste dont le maillot remonte très haut. Vous explosez de rire.\n\n";
        std::cout << "Bah? Je comprends pas! J'suis sûr que ça t'ira super bien!\n\n";
        std::cout << "J'vais te fumer, bâtard. - répond-elle.\n\n";
        std::cout << "Après une longue hésitation, elle enfile finalement sa tenue, mais en mettant sa jupe par-dessus et en gardant ses collants. Toujours en train de pouffer, vous dévérouillez la porte pour laisser les robots entrer. Ils se précipitent tout excités dans la pièce, puis voient Mayu et tombent des nus. Le robot bleu, essayant tant bien que mal de cacher sa déception, se dirige vers la fenêtre et vous pointe la colline loin derrière la ville du doigt. Vous regardez tous les deux en direction de son doigt, et vous rendez compte qu'une armée de robots tous noirs se dirigent vers la ville.\n\n";
        std::cout << "C'est eux qui nous menacent! Allez les arrêter! - ordonne le robot bleu.\n\n";
        std::cout << "Vous saisissez votre épée, prêt à en découdre. Mais lorsque votre regard croise celui de votre soeur, l'hésitation vous gagne...\n\n";

        // Choix 3

        for (int i = 0; i < 3 && choix3b != 1 && choix3b != 2; i++) {
        std::cout << "Est-ce que je l'emmène avec moi?\n\n";

        std::cout << "1) Oui\n";
        std::cout << "2) Non\n";

        std::cin >> choix3b;
        }

        // Choix 3 : réponse 1
        
        if (choix3b == 1) {
        std::cout << "Bha, après tout ça peut être marrant.\n\n";
        std::cout << "Pendant qu'elle essaye de repousser les robots lourdeaux, vous lui faites une tape sur l'épaule.\n\n";
        std::cout << "On y va?\n\n";
        std::cout << "Bonne idée, ils commencent à me saouler. - répond-elle.\n\n";
        std::cout << "Ni une ni deux, vous sautez par la fenêtre et atterrissez sur le champ de bataille, juste devant l'armée des robots. Ils s'arrêtent un instant et se mettent à rire à l'unisson. Le plus gros d'entre eux, sans doute leur chef, prend la parole.\n\n";
        std::cout << "Regardez ce que nous avons là. Une petite brunette et un gringalet! Vous pensez avoir une chance contre nous?\n\n";
        std::cout << "Vous vous tournez vers votre soeur, qui vous fait un signe de la tête. Vous vous mettez tous les deux en position, et vous ruez vers les ennemis. Prenant chacun un côté, vous fendez le coeur de vos ennemis d'un seul coup d'épée, les faisant exploser. Les robots alliés vous regardent du haut de la tour, impressionnés. On aurait dit une chorégraphie répétée des semaines à l'avance. Vous continuez jusqu'à ce qu'il ne reste plus qu'un seul robot, leur chef. Vous rejoignez votre soeur, et, tous les deux, vous vous placez devant lui, l'épée en main. Le robot, au sol, tend une main vers vous et vous implore.\n\n";

        // Choix 4

        for (int i = 0; i < 3 && choix4b != 1 && choix4b != 2; i++) {
        std::cout << "Je m'excuse! Ne me tuez pas! Pitié!\n\n";
        std::cout << "1) L'épargner\n";
        std::cout << "2) Le tuer\n";

        std::cin >> choix4b;
        }

        // Choix 4 : réponse 1
          
        if (choix4b == 1) {
        std::cout << "Comme il fait vraiment pitié, vous décidez de l'épargner. Vous rangez tous les deux votre épée, et revenez vers la ville tout fiers pour raconter vos exploits. Vous vous tournez vers Mayu.\n\n";
        std::cout << "Alors, c'était une bonne idée cette excursion, n...?\n\n";
        std::cout << "Vous n'avez pas le temps de finir votre phrase que vous remarquez avec effroi qu'une lame noire transperce la poitrine de Mayu. En vous retournant, vous constatez que son propriétaire n'est autre que le robot que vous veniez d'épargner. Il retire son épée d'un coup sec, laissant tomber Mayu en avant. Alors que vous rattrapez votre soeur, le robot éclate de rire.\n\n";
        std::cout << "Je vous l'avais dit! Personne ne peut me battre! Et encore moins des moustiques comme vous!\n\n";
        std::cout << "Puis il se rue vers la ville, tandis que vous restez là, tenant votre soeur dans vos bras, sans savoir quoi faire pour la sauver. Alors que vous commencez à pleurer, vous l'entendez marmonner.\n\n";
        std::cout << "C'était pas une bonne idée...\n\n";
        std::cout << "Avant de rendre son dernier souffle. Vous la serrez dans vos bras en pleurant bruyamment, sans vous soucier des bruits de destruction et des cris de terreur qui proviennent de la ville.\n\n";

        std::cout << "FIN 8: C'était vraiement pas une bonne idée...\n";
        return 0;

        // Choix 4 : réponse 2
          
        } else if (choix4b == 2) {
        std::cout << "Vous vous regardez un instant dans les yeux, avant de transpercer son coeur à l'unisson. Le robot explosa en une pluie de confettis. Après un high five et un bref instant à profiter des confettis, vous vous dirigez tous les deux vers la ville pour raconter vos exploits. Là-bas, vous êtes tous les deux accueillis comme des héros. Les robots vous soulèvent tous les deux comme des prophètes qui viennent de réaliser un miracle, en vous arrosant de serpentins et de ce qui semble être du champagne.\n";
        std::cout << "Après vous avoir baladés comme ça dans toute la ville, les robots vous emmènent dans la tour principale et se rendent dans une salle, dans laquelle se trouve quelque chose qui ressemble à un téléporteur. Ils vous posent tous les deux, et se réunissent devant vous.\n\n";
        std::cout << "Nos héros! - dit le robot bleu du début - Vous nous avez sauvés d'une mort certaine, et nous vous en serons éternellement reconnaissants! Nous allons à présent vous renvoyer dans votre monde, mais nous ne vous oublierons jamais! En gage de notre gratitude, vous pouvez emporter avec vous l'équipement que nous vous avons donné. Adieux, héros! Et rentrez bien!\n\n";
        std::cout << "Vous lui répondez par un sourire et entrez dans le téléporteur. Mayu vous rejoint après avoir consoler des robots qui pleuraient à l'idée de la voir partir. Le robot bleu appuie sur un bouton, et tous vous firent des coucous en bondissant. Alors que vous sentez partir, vous leur faites tous les deux un signe de la main, avant de vous téléporter, pour vous retrouver exactement à l'endroit où vous étiez avant de tomber dans la porte.\n";
        std::cout << "Vous vous regardez pendant un instant avec Mayu, avant d'éclater de rire.\n\n";
        std::cout << "On devrait faire ça plus souvent! - s'exclama Mayu.\n\n";
        std::cout << "C'est clair!\n\n";
        std::cout << "Puis, bras dessus bras dessous, vous vous dirigez tout guilleret vers votre maison, des souvenirs pleins la tête, et un équipement futuriste en poche!\n\n";

        std::cout << "FIN 9: On remet ça quand?\n";
        return 0;

        } else {
        std::cout << "L'histoire n'avançera pas si vous ne vous décidez pas. Faites votre choix.\n";
        }

         // Choix 3 : réponse 2
          
        } else if (choix3b == 2) {
          std::cout << "Jugeant la situation trop dangereuse, vous décidez de ne pas emmener Mayu avec vous pour cette bataille. Pendant qu'elle essaye de repousser les robots lourdeaux, vous en profitez pour vous eclipser en douce. Mayu s'en rend compte mais trop tard, vous êtes déjà loin. Alors que vous vous avancez seul sur le champ de bataille, vous pouvez l'entendre vous appeler au loin, mais vous ne répondez pas.\n";
          std::cout << "Vous brandissez fièrement votre épée vers l'armée des robots. Mais il y a un problème...Vous n'avez pas prévu qu'il y en ait autant. Vous vous battez de toute votre force pour essayer de les arrêter, mais rien à faire, ils sont trop nombreux. A chaque fois que vous en tuez un, deux autres se ramènent. Vos forces vous abandonnent petit à petit, et vous voilà maintenant encerclé. Les robots se jettent alors sur vous et vous déchiquettent, sous le regard choqué de votre soeur, qui voit tout depuis la fenêtre de la tour.\n";
          std::cout << "Mayu restera à jamais traumatisée par cette scène, se demandant à chaque instant si les choses auraient tournées autrement si elle aurait pu vous rejoindre à temps.\n\n";

          std::cout << "FIN 7: Kazuo...Pourquoi t'as fait ça...?\n";
          return 0;

        } else {
        std::cout << "L'histoire n'avançera pas si vous ne vous décidez pas. Faites votre choix.\n";
        }


        // Choix 2 : réponse 2
        
      } else if (choix2b == 2) {
      std::cout << "Les robots restent là comme des teubés, comme s'ils avaient mal entendu. Quand ils comprennent que vous avez bien dit non, ils se mettent tous à pleurer. Vous et Mayu restez impassibles face à ce spectacle larmoyant.\n\n";
      std::cout << "Vous êtes sûrs?... - demande le robot bleu.\n\n";
      std::cout << "Vous hochez la tête avec insistance. Le robot bleu essuie une larme et vous fait signe de le suivre. Il vous emmène dans une salle, dans laquelle se trouve quelque chose qui ressemble à un téléporteur. Vous y entrez tous les deux sans hésitation. Le robot bleu commence à appuyer sur un bouton mais s'interrompt.\n\n";
      std::cout << "Vous êtes sûre de ne pas vouloir rester?... - demande-t-il à Mayu.\n\n";
      std::cout << "Je suis sûre! - répond-elle d'un ton sec\n\n";
      std::cout << "Le robot soupire et appuie sur le bouton. Vous vous téléportez pour vous retrouver pile à l'endroit où vous étiez avant de tomber dans le gouffre. Vous vous dirigez tous les deux vers votre maison, avec une tête de 10 pieds de long.\n\n";
      std::cout << "On est d'accord que ça vaut 2 semaines de corvée vaisselle ce que tu viens de faire... - grogne Mayu.\n\n";
      std::cout << "J'accepte le châtiment...\n\n";
      std::cout << "Mayu hoche la tête. Vous reprenez le chemin vers chez vous. Ces 2 semaines vont être interminables...\n\n";

      std::cout << "FIN 6: Plus jamais tu me fais entrer dans des portes cheloues.\n";
      return 0;

      } else {
    std::cout << "L'histoire n'avançera pas si vous ne vous décidez pas. Faites votre choix.\n";
  }

  } 
  
  // Embranchement C
  
  else if (choix1 == 3) {
    std::cout << "Impassible face à ce spectacle, vous continuez votre chemin et rentrez chez vous. Après avoir essayé de faire vos devoirs et échoué, regarder 20 minutes de programmes inintéressants à la télé, et avoir mangé un repas à base de restes, vous vous mettez au lit, comme tous les soirs, en pensant que la journée suivante sera exactement comme les autres : nulle.\n\n";

    std::cout << "FIN 1: Métro, boulot, dodo...\n";
    return 0;

  } else {
    std::cout << "L'histoire n'avançera pas si vous ne vous décidez pas. Faites votre choix.\n";
  }

}
